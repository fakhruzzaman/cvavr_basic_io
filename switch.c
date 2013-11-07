/* switch */

#include <mega8535.h>

void main(void)
{
    PORTA = 0x00;
    DDRA  = 0xFF;
    
    PORTB = 0xFF;
    DDRB  = 0x00;
    
    while(1)
    {            
     
     if (PINB.0==0)
     {
      PORTA.0 = 1;
     };            
     
     if (PINB.0==1)
     {
      PORTA.0 = 0;
     };          
          
     if (PINB.1==0)
     {
      PORTA.1 = 1;
     };            
     
     if (PINB.1==1)
     {
      PORTA.1 = 0;
     };
         
     if (PINB.2==0)
     {
      PORTA.2 = 1;
     };            
     
     if (PINB.2==1)
     {
      PORTA.2 = 0;
     };
     
    }

}
