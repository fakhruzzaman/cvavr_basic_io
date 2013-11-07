#include <mega8535.h>
#include <delay.h>

unsigned char kiri=0b00000001, kanan=0b10000000;

void geser_kanan() //fungsi untuk menggeser led berjalan kearah kanan
{
if (kanan ==0b00000001) kanan = 0b10000000;
else kanan >>= 1;
PORTA = kanan;
delay_ms(500);
}

void geser_kiri()  //fungsi untuk menggeser led berjalan kearah kiri
{
if (kiri==0b10000000) kiri = 0b00000001;
else kiri <<= 1;
PORTA = kiri;
delay_ms(500);
}

void mati()
{
 PORTA = 0;
}

void main(void)
{
PORTA = 0x00;     //Port A diberikan logika high atau LED mati
DDRA = 0xff;     //port A sebagai output

    while(1)
    {    
	geser_kanan(); //panggil subrutin kanan
    };
}
