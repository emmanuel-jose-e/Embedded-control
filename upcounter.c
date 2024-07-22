#include <lpc214x.h>
void delay(unsigned int count);
int main() {
while(1){
IODIR1&=(~(0x01<<16));//set direction as output
IODIR0|=(0x01<<5);
	IODIR0|=(0x01<<1);
	IODIR0|=(0x01<<3);
	IODIR0|=(0x01<<4);//set direction as output
if((0x01<<16)&IOPIN1){
  // Set P0.10 as output

	IOCLR0 |= (1 << 5);
	IOCLR0 |= (1 << 1);
	IOCLR0 |= (1 << 3);
	IOCLR0 |= (1 << 4);
	delay(400000);
	IOCLR0 |= (1 << 5);
	IOCLR0 |= (1 << 1);
	IOCLR0 |= (1 << 3);
	IOSET0 |= (1 << 4);
	delay(400000);
	IOCLR0 |= (1 << 5);
	IOCLR0 |= (1 << 1);
	IOSET0 |= (1 << 3);
	IOCLR0 |= (1 << 4);
	delay(400000);
	IOCLR0 |= (1 << 5);
	IOCLR0 |= (1 << 1);
	IOSET0 |= (1 << 3);
	IOSET0 |= (1 << 4);
	delay(400000);
	IOCLR0 |= (1 << 5);
	IOSET0 |= (1 << 1);
	IOCLR0 |= (1 << 3);
	IOCLR0 |= (1 << 4);
	delay(400000);
	IOCLR0 |= (1 << 5);
	IOSET0 |= (1 << 1);
	IOCLR0 |= (1 << 3);
	IOSET0 |= (1 << 4);
  delay(400000);
  IOCLR0 |= (1 << 5);
	IOSET0 |= (1 << 1);
	IOSET0 |= (1 << 3);
	IOCLR0 |= (1 << 4);
  delay(400000);
	IOCLR0 |= (1 << 5);
	IOSET0 |= (1 << 1);
	IOSET0 |= (1 << 3);
	IOSET0 |= (1 << 4);
	delay(400000);
	IOSET0 |= (1 << 5);
	IOCLR0 |= (1 << 1);
	IOCLR0 |= (1 << 3);
	IOCLR0 |= (1 << 4);
	delay(400000);
	IOSET0 |= (1 << 5);
	IOCLR0 |= (1 << 1);
	IOCLR0 |= (1 << 3);
	IOSET0 |= (1 << 4);
	delay(400000);
	IOSET0 |= (1 << 5);
	IOCLR0 |= (1 << 1);
	IOSET0 |= (1 << 3);
	IOCLR0 |= (1 << 4);
	delay(400000);
	IOSET0 |= (1 << 5);
	IOCLR0 |= (1 << 1);
	IOSET0 |= (1 << 3);
	IOSET0 |= (1 << 4);
	delay(400000);
	IOSET0 |= (1 << 5);
	IOSET0 |= (1 << 1);
	IOCLR0 |= (1 << 3);
	IOCLR0 |= (1 << 4);
	delay(400000);
	IOSET0 |= (1 << 5);
	IOSET0 |= (1 << 1);
	IOCLR0 |= (1 << 3);
	IOSET0 |= (1 << 4);
	delay(400000);
	IOSET0 |= (1 << 5);
	IOSET0 |= (1 << 1);
	IOSET0 |= (1 << 3);
	IOCLR0 |= (1 << 4);
	delay(400000);
	IOSET0 |= (1 << 5);
	IOSET0 |= (1 << 1);
	IOSET0 |= (1 << 3);
	IOSET0 |= (1 << 4);
	delay(400000);
      }
else{
	IOCLR0 |= (1 << 5);
	IOCLR0 |= (1 << 1);
	IOCLR0 |= (1 << 3);
	IOCLR0 |= (1 << 4);
	
}
}
}
void delay(unsigned int count)
{
	unsigned int i;
	for(i=0;i<count;i++);
}