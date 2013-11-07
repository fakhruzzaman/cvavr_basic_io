/* pushbutton with delay */

#include <mega8535.h>
#include <delay.h>

void main(void)
{
	PORTA = 0x00;
	DDRA  = 0xff;

	PORTB = 0xff;
	DDRB  = 0x00;
	
	while(1)
	{
	 	if(PINB.0 == 0)
		{
		   PORTA.0 = 1;
           delay_us(1);   
           PORTA.0 = 0;
        };
    }
}
