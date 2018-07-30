/*
 * geoffreynguyen011_lab1_part1_.cpp
 *
 * Created: 7/30/2018 2:16:42 PM
 * Author : ucrcse
 */ 

#include <avr/io.h>


int main(void)
{
    /* Replace with your application code */
	DDRA = 0x00; PORTA = 0xFF;
	DDRB = 0xFF; PORTB = 0x00;
	
	unsigned char tmpA = 0x00;
	unsigned char tmpB = 0x00;
	unsigned char tmpC = 0x00;
    while (1) 
    {
		tmpA = PINA & 0x01;
		tmpC = PINA & 0x02;
		if (tmpA == 0x01 && tmpC != 0x02) {
			tmpB = (tmpB & 0xFC) | 0x01;
		}
		else {
			tmpB = (tmpB & 0xFC) | 0x00;
		}
		
	PORTB = tmpB;
	}
	return 0;
}

