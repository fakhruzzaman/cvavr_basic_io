/* pushbutton */

#include <mega8535.h>

void main(void)
{
	PORTA = 0x00;
	DDRA  = 0xFF;  
    
    PORTB = 0xFF;
	DDRB  = 0x00;
	
	while(1)
	{
	 	if(PINB.0 == 0)
		{
		   PORTA.0 = 1;
        }
        else
        {
            PORTA.0 = 0;
        };
    }
}
