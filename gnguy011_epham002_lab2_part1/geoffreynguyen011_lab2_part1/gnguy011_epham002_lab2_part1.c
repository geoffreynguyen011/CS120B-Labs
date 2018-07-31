/*	Partner(s) Name & E-mail: Geoffrey Nguyen gnguy011, Eric Pham epham002
 *	Lab Section: B21
 *	Assignment: Lab #2  Exercise #1 
 *	Exercise Description: [optional - include for your own benefit]
 *	
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */


#include <avr/io.h>

unsigned char SetBit(unsigned char x, unsigned char k, unsigned char b) {
	return (b ? x | (0x01 << k) : x & ~(0x01 << k));
}
unsigned char GetBit(unsigned char x, unsigned char k) {
	return ((x & (0x01 << k)) != 0);
}


int main(void)
{
	DDRA = 0x00; PORTA = 0xFF;
	DDRB = 0x00; PORTB = 0xFF;
	DDRC = 0xFF; PORTC = 0x00;
	
	unsigned char count;
	unsigned char i, pinA0, pinB0;
	
    while (1) 
    {
		count = 0;

		pinA0 = PINA & 0xFF;
		pinB0 = PINB & 0xFF;
		
		for (i = 0; i < 8; ++i) {
			if (GetBit(pinA0, i)) {
				count++;
			}
		}
		
		for (i = 0; i < 8; ++i) {
			if (GetBit(pinB0, i)) {
				count++;
			}
		}	
		PORTC = count;
    }
	
	return 0;
}

