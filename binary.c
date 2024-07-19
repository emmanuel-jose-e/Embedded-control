#include <lpc214x.h>
void delay(unsigned int count);
int main() {
int i;
IODIR0 |= (1 << 1);
IODIR0 |= (1 << 2);
IODIR0 |= (1 << 3);
IODIR0 |= (1 << 4);
IODIR0 |= (1 << 5);
IODIR0 |= (1 << 6);
IODIR0 |= (1 << 7);
IODIR0 |= (1 << 8);

  // Set P0.10 as output


	for(i=0;i<7;i++)
	{
		IOSET0 |= (1 << 1);
		delay(100000);
		if (i>0)
		{
			IOSET0 |= (1 << 2);
		}
		delay(100000);
		if (i>1)
    {
				IOSET0 |= (1 << 3);
		}
		if (i>2)
		{
			IOSET0 |= (1 << 4);
		}
		delay(100000);
		if (i>3)
    {
				IOSET0 |= (1 << 5);
		}if (i>4)
		{
			IOSET0 |= (1 << 6);
		}
		delay(100000);
		if (i>5)
    {
				IOSET0 |= (1 << 7);
		}if (i>6)
		{
			IOSET0 |= (1 << 8);
		}
		delay(100000);
	
			delay(500000);
		IOCLR0 |= (1 << 1);
		IOCLR0 |= (1 << 2);
		IOCLR0 |= (1 << 3);
		IOCLR0 |= (1 << 4);
		IOCLR0 |= (1 << 5);
		IOCLR0 |= (1 << 6);
		IOCLR0 |= (1 << 7);
		IOCLR0 |= (1 << 8);
		 
		delay(500000);

      }
}
void delay(unsigned int count)
{
	unsigned int i;
	for(i=0;i<count;i++);
}

	