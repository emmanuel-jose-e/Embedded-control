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
	IODIR0 |=(0x01<11);
	IODIR0 |=(0X01<<12);
	IODIR0 |=(0X01<<13);
	IODIR0 |=(0X01<<14);
	IODIR0 |=(0X01<<15);
	IODIR0 |=(0X01<<16);
	
	while(1)
	{
		//0
	IOSET0 |= (1 << 3);
	IOSET0 |= (1 << 4);
	IOSET0 |= (1 << 5);
	IOSET0 |= (1 << 6);
	IOSET0 |= (1 << 7);
	IOSET0 |= (1 << 8);
	delay(400000);
		//1
	IOSET0 |= (1 << 4);
	IOSET0 |= (1 << 5);	
	delay(400000);
		//2
	IOSET0 |= (1 << 3);
	IOSET0 |= (1 << 4);
	IOSET0 |= (1 << 9);
	IOSET0 |= (1 << 7);
  IOSET0 |= (1 << 6);		
	delay(400000);
		//3
	IOSET0 |= (1 << 3);
	IOSET0 |= (1 << 4);
			IOSET0 |= (1 << 9);
		IOSET0 |= (1 << 5);
		IOSET0 |= (1 << 6);
	delay(400000);
	//4
IOSET0 |= (1 << 8);
		IOSET0 |= (1 << 9);
		IOSET0 |= (1 << 5);
		IOSET0 |= (1 << 4);
	delay(400000);
	//5
	IOSET0 |= (1 << 3);
	IOSET0 |= (1 << 8);
	IOSET0 |= (1 << 9);
	IOSET0 |= (1 << 5);
	IOSET0 |= (1 << 6);
  delay(400000);
	//6
  IOSET0 |= (1 << 3);
	IOSET0 |= (1 << 8);
	IOSET0 |= (1 << 7);
	IOSET0 |= (1 << 6);
	IOSET0 |= (1 << 5);
	IOSET0 |= (1 << 9);
  delay(400000);
	//7
	IOSET0 |= (1 << 3);
	IOSET0 |= (1 << 4);
	IOSET0 |= (1 << 5);
	
	delay(400000);
	//8
	IOSET0 |= (1 << 3);
	IOSET0 |= (1 << 4);
	IOSET0 |= (1 << 5);
	IOSET0 |= (1 << 6);
	IOSET0 |= (1 << 7);
	IOSET0 |= (1 << 8);
	IOSET0 |= (1 << 9);
	delay(400000);
	
	IOSET0 |= (1 << 3);
	IOSET0 |= (1 << 4);
	IOSET0 |= (1 << 5);
	IOSET0 |= (1 << 6);
	IOSET0 |= (1 << 9);
	IOSET0 |= (1 << 8);
	
	delay(400000);

		}
}

void delay(unsigned int count)
{
	unsigned int i;
	for(i=0;i<count;i++);
	IOCLR0 |= (1 << 3);	
	IOCLR0 |= (1 << 4);	
	IOCLR0 |= (1 << 5);	
	IOCLR0 |= (1 << 6);	
	IOCLR0 |= (1 << 7);	
	IOCLR0 |= (1 << 8);	
	IOCLR0 |= (1 << 9);	
}		