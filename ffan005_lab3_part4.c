#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
    /* Insert DDR and PORT initializations */
DDRA = 0x00; PORTA = 0xFF;
DDRC = 0x00; PORTC = 0x00;
DDRB = 0x00; PORTB = 0x00;

unsigned char tmpA = 0x00;
unsigned char tmpB = 0x00;
unsigned char tmpC = 0x00;
    /* Insert your solution below */
    while (1) {
    
    }   
    return 1;
}
