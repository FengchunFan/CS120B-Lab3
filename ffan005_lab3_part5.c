/*     Author: ffan005
 *  Partner(s) Name:
 *      Lab Section:
 *      Assignment: Lab #  Exercise #
 *      Exercise Description: [optional - include for your own benefit]
 *
 *      I acknowledge all content contained herein, excluding template or example
 *      code, is my own original work.
 */
 
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
DDRD = 0x00; PORTD = 0xFF; //first set D as input
DDRB = 0xFF; PORTB = 0x00; //we want PB0 as input, but PB1 and PB2 as output
 
while(1){
  break;
}
     return 1;
}
