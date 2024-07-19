#include <LPC214x.h>
void delay(unsigned int count);
int main()
{
	int i=0;
	IODIR0 |=(0x01<<2);
	IODIR0 |=(0x01<<3);
	IODIR0 |=(0X01<<4);
	while(1)
	{
				IOCLR0 |=(1<<3);
		    IOSET0 |=(1<<2);
				delay(500000);
				
		    IOCLR0 |=(1<<2);
		    IOSET0 |=(1<<3);
				delay(100000);
				IOCLR0 |=(1<<3);
				IOSET0 |=(1<<4);
				delay(500000);
				IOCLR0 |=(1<<4);
				IOSET0 |=(1<<3);
				delay(100000);
		
		}
		
	  }	

void delay(unsigned int count)
{
	unsigned int i;
	for(i=0;i<count;i++);
}		