//SWITCH
#include<LPC214X.h>
int main(){
while(1){
IODIR1&=(~(0x01<<16));//set direction as output
IODIR1&=(~(0x01<<17));//set direction as output
IODIR0|=(0x01<<7);//set direction as output
IODIR0|=(0x01<<4);//set direction as output
if((0x01<<16)&IOPIN1){
IOCLR0|=(0x01<<7);
}
	else{
IOSET0|=(0x01<<7);
	}
if((0x01<<17)&IOPIN1){
IOCLR0|=(0x01<<4);
}
	else{
IOSET0|=(0x01<<4);
	}
	}	
} 