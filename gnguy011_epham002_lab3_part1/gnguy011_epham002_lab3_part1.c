/*
 * gnguy011_epham002_lab3_part1.c
 *
 * Created: 8/1/2018 1:12:12 PM
 * Author : ucrcse
 */ 

#include <avr/io.h>


int main(void) {

unsigned char ledA0, ledB0;
DDRA = 0x00; PORTA = 0xFF;
DDRB = 0xFF; PORTB = 0x00;


    /* Replace with your application code */
    while (1) 
    {
		ledA0 = PINA & 0x01;
		if (ledA0 != 0x01) {
			ledB0 = 0x01;
		}
		else if (ledA0 = 0x01) {
			ledB0 = 0x02;
		}		
		else {
			ledB0 = ledB0;
		}
		PORTB = ledB0;
    }
	return 0;
}

