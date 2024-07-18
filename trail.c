#include <LPC214x.h>

// Delay function
void delay(unsigned int count) {
    unsigned int i;
    for (i = 0; i < count; i++);
}

int main(void) {
    // Set P0.10 as output
    IODIR0 |= (1 << 9);
    
    while (1) {
        // Turn LED on
        IOSET0 |= (1 << 9);
        delay(100000);

        // Turn LED off
        IOCLR0 |= (1 << 9);
        delay(100000);
    }

    return 0;
}