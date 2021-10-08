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
    /* Insert DDR and PORT initializations */
DDRA = 0x00; PORTA = 0xFF;
DDRB = 0x00; PORTB = 0xFF;
DDRC = 0x00; PORTC = 0x00;
unsigned char cnt= 0x00;
unsigned char tmpAA = 0x00;
unsigned char tmpAB = 0x00;
unsigned char tmpAC = 0x00;
unsigned char tmpAD = 0x00;
unsigned char tmpAE = 0x00;
unsigned char tmpAF = 0x00;
unsigned char tmpAG = 0x00;
unsigned char tmpAH = 0x00;
unsigned char tmpBA = 0x00;
unsigned char tmpBB = 0x00;
unsigned char tmpBC = 0x00;
unsigned char tmpBD = 0x00;
unsigned char tmpBE = 0x00;
unsigned char tmpBF = 0x00;
unsigned char tmpBG = 0x00;
unsigned char tmpBH = 0x00;

    /* Insert your solution below */
    while (1) {
tmpAA = (PINA&0x80)>>7;
tmpAB = (PINA&0x40)>>6;
tmpAC = (PINA&0x20)>>5;
tmpAD = (PINA&0x10)>>4;
tmpAE = (PINA&0x08)>>3;
tmpAF = (PINA&0x04)>>2;
tmpAG = (PINA&0x02)>>1;
tmpAH = (PINA&0x01);

tmpBA = (PINB&0x80)>>7;
tmpBB = (PINB&0x40)>>6;
tmpBC = (PINB&0x20)>>5;
tmpBD = (PINB&0x10)>>4;
tmpBE = (PINB&0x08)>>3;
tmpBF = (PINB&0x04)>>2;
tmpBG = (PINB&0x02)>>1;
tmpBH = (PINB&0x01);

cnt = tmpAA + tmpAB+tmpAC+tmpAD+tmpAE+tmpAF+tmpAG+tmpAH+tmpBA+tmpBB+tmpBC+tmpBD+tmpBE+tmpBF+tmpBG+tmpBH;
PORTC = cnt;
    }
    return 1;
}
