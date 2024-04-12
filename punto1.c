#include "MKL25Z4.h"

int main (){
    uint8_t EST_A;
    SIM -> SCGC5 |= SIM_SCGC5_PORTA_MASK|SIM_SCGC5_PORTB_MASK;
    PTA -> PDDR |= 0X00000000;
    PTB -> PDDR |= 0XFFFFFFFF;
    
    while(1){
       uint32_t  PTA -> PDIR;
        PTB -> PDOR|=EST_A;
    }
}