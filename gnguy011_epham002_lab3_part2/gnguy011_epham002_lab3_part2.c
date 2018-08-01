/*
 * gnguy011_epham002_lab3_part2.c
 *
 * Created: 8/1/2018 2:05:09 PM
 * Author : ucrcse
 */ 

#include <avr/io.h>


int main(void)
{
	
	DDRA = 0x00; PORTA = 0xFF;
	DDRC = 0xFF; PORTC = 0x00;
	unsigned char inA0, inA1;
	signed char outC;
	PORTC = 7;
	outC = 7;
    /* Replace with your application code */
    while (1) 
    {
		inA0 = PINA & 0x01;
		inA1 = PINA & 0x02;
		if (inA0 == 0x01) {
			if (inA1 == 0x02) {
				outC = 0;
			}
			if (outC >= 9) {
				outC = 9;
			}
			PORTC = outC;
			outC++;
		}
		
		if (inA1 == 0x02) {
			if (inA0 == 0x01) {
				outC = 0;
			}
			if (outC <= 0) {
				outC = 0;
			}
			PORTC = outC;
		outC--;
		}
    }
	return 0;
}

