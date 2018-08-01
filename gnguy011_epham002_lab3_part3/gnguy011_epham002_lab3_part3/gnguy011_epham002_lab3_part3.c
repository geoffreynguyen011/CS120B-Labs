/*
 * gnguy011_epham002_lab3_part3.c
 *
 * Created: 8/1/2018 3:06:35 PM
 * Author : ucrcse
 */ 

#include <avr/io.h>


int main(void)

DDRA = 0x00; PORTA = 0xFF;
DDRB = 0xFF; PORTB = 0x00;
DDRC = 0xFF; PORTC = 0x00;

unsigned char A0buttonX, A1buttonY, A2buttonPound, A7buttonInside, outB0, A4extra;
enum state ()

outB0 = 0;

{
    /* Replace with your application code */
    while (1) 
    {
		A0buttonX = PINA & 0x01;
		A1buttonY = PINA & 0x02;
		A2buttonPound = PINA & 0x04;
		A7buttonInside = PINA & 0x80;
		
		if (A0buttonX == 0x01) {
			A1buttonY = 0;
			A2buttonPound = 0;
			A7buttonInside = 0;
		}
		
		if (A1buttonY == 0x02) {
			A0buttonX = 0;
			A2buttonPound = 0;
			A7buttonInside = 0;
			A3signal
		}
		
		if (A2buttonPound == 0x04) {
			A0buttonX = 0;
			A1buttonY = 0;
			A7buttonInside = 0;
		}
		
		if (A7buttonInside == 0x80) {
			A0buttonX = 0;
			A1buttonY = 0;
			A2buttonPound = 0;
		}
		
		
		
		
		
		
		if (A7buttonInside == 0x80) {
			outB0 = 0;
		}
		
		PORTC = state;
    }
	return 0;
}

