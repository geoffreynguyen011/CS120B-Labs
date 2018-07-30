
/*
 * geoffreynguyen011_lab1_part2.cpp
 *
 * Created: 7/30/2018 2:57:58 PM
 * Author : ucrcse
 */ 

#include <avr/io.h>

int main(void)
{
	DDRA = 0x00; PORTA = 0xFF; 
	DDRC = 0xFF; PORTC = 0x00; 

	unsigned int cntavail;
	unsigned char lot1, lot2, lot3, lot4, full;
	
	while(1)
	{
		
		lot1 = PINA & 0x01;
		lot2 = PINA & 0x02;
		lot3 = PINA & 0x04;
		lot4 = PINA & 0x08;
		full = 0;
		
		cntavail = 4;
		
		if (lot1 == 0x01) { 
			cntavail--; 
		}
		
		if (lot2 == 0x02) {
			cntavail--;
		}
		
		if (lot3 == 0x04) {
			cntavail--;
		}
		
		if (lot4 == 0x08) {
			cntavail--;
		}
		
		if (cntavail == 0) {
			full = 0x80;
		}
		
		
			PORTC = cntavail | full;
	}
	
		
	
	return 0;
}




