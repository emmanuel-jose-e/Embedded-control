#include <LPC214x.h>
void delay(unsigned int count);

int main()

{
	int i=0;
	
	IODIR0 |=(0x01<<3);
	IODIR0 |=(0x01<<4);
	IODIR0 |=(0X01<<5);
	IODIR0 |=(0X01<<6);
	IODIR0 |=(0X01<<7);
	IODIR0 |=(0X01<<8);
	IODIR0 |=(0X01<<9);
	IODIR0 |=(0x01<<10);
	IODIR0 |=(0x01<<11);
	IODIR0 |=(0X01<<12);
	IODIR0 |=(0X01<<13);
	IODIR0 |=(0X01<<14);
	IODIR0 |=(0X01<<15);
	IODIR0 |=(0X01<<16);
	while(1)
	{
		//00
	IOSET0 |= (1 << 3);
	IOSET0 |= (1 << 4);
	IOSET0 |= (1 << 5);
	IOSET0 |= (1 << 6);
	IOSET0 |= (1 << 7);
	IOSET0 |= (1 << 8);
	IOSET0 |= (1 << 10);
	IOSET0 |= (1 <<11);
	IOSET0 |= (1 << 12);
	IOSET0 |= (1 << 13);
	IOSET0 |= (1 << 14);
	IOSET0 |= (1 << 15);
	delay(400000);
		//01
		IOSET0 |= (1 << 3);
	IOSET0 |= (1 << 4);
	IOSET0 |= (1 << 5);
	IOSET0 |= (1 << 6);
	IOSET0 |= (1 << 7);
	IOSET0 |= (1 << 8);
	
	IOSET0 |= (1 << 11);
	IOSET0 |= (1 <<12);	
	delay(400000);
	//10
	IOSET0 |= (1 << 4);
	IOSET0 |= (1 <<5);	
	IOSET0 |= (1 << 10);
	IOSET0 |= (1 <<11);
	IOSET0 |= (1 << 12);
	IOSET0 |= (1 << 13);
	IOSET0 |= (1 << 14);
	IOSET0 |= (1 << 15);
	delay(400000);
	//11
	IOSET0 |= (1 << 4);
	IOSET0 |= (1 <<5);
	IOSET0 |= (1 << 11);
	IOSET0 |= (1 <<12);	
	delay(400000);

		}
}

void delay(unsigned int count)
{
	unsigned int i,j;
	for(i=0;i<count;i++);
	for(j=3;j<18;j++)
	{
	IOCLR0 |= (1 << j);	
	}
	
}		