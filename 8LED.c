//LED
#include<LPC214X.h>
void delay(unsigned int count);
unsigned int j,i;
int main()
{
	for(j=0;j<8;j++)
		{
		IODIR0|=(1<<j);		
		}
	
	for(i=0;i<8;i++)
	{
		for(j=0;j<=i;j++) 
		{
      	IOSET0|=(1<<j);
	       delay(200000);		
		}
	for(j=0;j<8;j++)
		{
		IOCLR0|=(1<<j);		
		}
	delay(200000);
	}
		return 0;
}	
void delay(unsigned int count){
	unsigned int i;
	for(i=0;i<count;i++);
}