#include <LPC214x.h>
void delay(unsigned int count);

int main()

{
	int i=0;
	IODIR0 |=(0x01<<13);
	IODIR0 |=(0x01<<14);
	IODIR1&=(~(0x01<<16));
		if((0x01<<16)&IOPIN1)
		{
			IOCLR0|=(0x01<<13);
			//IOSET0|=(0x01<<14);
		}
		else
		{
			IOSET0|=(0x01<<13);
			//IOCLR0|=(0x01<<14);
		}
}	
