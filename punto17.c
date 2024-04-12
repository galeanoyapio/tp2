#include "MKL25Z4.h"

int main (){
    SIM -> SCGC5 |= SIM_SCGC5_PORTA_MASK|SIM_SCGC5_PORTB_MASK;
    PTA -> PDDR |= 0X00000000;
    PTB -> PDDR |= 0XFFFFFFFF;
    
    while(1){
       uint32_t EST_B =  PTA -> PDIR;
        PTA -> PDOR|= EST_B;
        if(EST_B == 0){
            PTA->PDOR |= (0X10101010);
        }else{
            PTA->PCOR |= (0X01010101);
        }
    }
    return 0;
}