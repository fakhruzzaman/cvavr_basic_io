/* nyalakan led biasa */

#include <mega8535.h>

void main(void)
{
    DDRA  = 0xFF;
    
    while(1)
    {
     PORTA = 0xFF;
    }

}
