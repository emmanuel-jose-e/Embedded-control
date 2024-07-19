#include <lpc214x.h>
void delay(unsigned int count);
int main() {

IODIR0 |= (1 << 1);
IODIR0 |= (1 << 3);
IODIR0 |= (1 << 4);
  // Set P0.10 as output

while (1){
	IOCLR0 |= (1 << 1);
	IOCLR0 |= (1 << 3);
	IOCLR0 |= (1 << 4);
	delay(400000);
	IOCLR0 |= (1 << 1);
	IOCLR0 |= (1 << 3);
	IOSET0 |= (1 << 4);
	delay(400000);
	IOCLR0 |= (1 << 1);
	IOSET0 |= (1 << 3);
	IOCLR0 |= (1 << 4);
	delay(400000);
	IOCLR0 |= (1 << 1);
	IOSET0 |= (1 << 3);
	IOSET0 |= (1 << 4);
	delay(400000);
	IOSET0 |= (1 << 1);
	IOCLR0 |= (1 << 3);
	IOCLR0 |= (1 << 4);
	delay(400000);
	IOSET0 |= (1 << 1);
	IOCLR0 |= (1 << 3);
	IOSET0 |= (1 << 4);
delay(400000);
	IOSET0 |= (1 << 1);
	IOSET0 |= (1 << 3);
	IOCLR0 |= (1 << 4);
  delay(400000);
	IOSET0 |= (1 << 1);
	IOSET0 |= (1 << 3);
	IOSET0 |= (1 << 4);
	delay(400000);
      }
}
void delay(unsigned int count)
{
	unsigned int i;
	for(i=0;i<count;i++);
}

