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
DDRB = 0xFE; PORTB = 0x00; //we want PB0 as input, but PB1 and PB2 as output

unsigned char tmpD = 0x00;
unsigned char tmpB = 0x00;
unsigned char output = 0x00;
unsigned short weight = 0;
while(1){
  tmpD = PIND;
  tmpB = PINB;
  weight = (tmpD << 1) | (tmpB & 0x01);
}
     return 1;
}
