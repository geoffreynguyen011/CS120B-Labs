/*
 * gnguy011_epham002_lab2_part2.c
 *
 * Created: 7/31/2018 2:40:21 PM
 * Author : ucrcse
 */ 

#include <avr/io.h>


int main(void)
{
	unsigned char P0, P1, P2, P3, P4, P5, P6, P7;
	DDRA = 0x00; PORTA = 0xFF;
	DDRC = 0xFF; PORTC = 0x00;
	
	unsigned char fuelSensor, seatbeltSensor;
    while (1) 
    {
		fuelSensor = PINA & 0x0F;
		seatbeltSensor = PINA & 0x7F;
		
		P0 = PINC & 0x01;
		P1 = PINC & 0x02;
		P2 = PINC & 0x04;
		P3 = PINC & 0x08;
		P4 = PINC & 0x10;
		P5 = PINC & 0x20;
		P6 = PINC & 0x40;
		P7 = PINC & 0x80;
		
		if (fuelSensor < 1) {
			P6 = 0x40;
			PORTC = 64;
		}
		else if (fuelSensor < 3) {
			P5 = 0x20;
			P6 = 0x40;
			PORTC = 96;
		}
		else if (fuelSensor < 5) {
			P6 = 0x40;
			P5 = 0x20;
			P4 = 0x10;
			PORTC = 112;
		}
		else if (fuelSensor < 7) {
			P5 = 0x20;
			P4 = 0x10;
			P3 = 0x08;
			PORTC = 56;
		}
		else if (fuelSensor < 10) {
			P5 = 0x20;
			P4 = 0x10;
			P3 = 0x08;
			P2 = 0x04;
			PORTC = 60;
		}
		else if (fuelSensor < 13) {
			P5 = 0x20;
			P4 = 0x10;
			P3 = 0x08;
			P2 = 0x04;
			P1 = 0x02;
			PORTC = 62;
		}
		else if (fuelSensor < 16) {
			P5 = 0x20;
			P4 = 0x10;
			P3 = 0x08;
			P2 = 0x04;
			P1 = 0x02;
			P0 = 0x01;
			PORTC = 63;
		}
		else {
			PORTC += 0;
		}

		
		if ((seatbeltSensor > 47) && (seatbeltSensor < 64)) {
			P7 = 0x80;
			PORTC = PORTC + 128;
		}
    }
	return 0;
}

