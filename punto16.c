#include "MKL25Z4.h"

int main (){
    SIM -> SCGC5 |= SIM_SCGC5_PORTA_MASK|SIM_SCGC5_PORTB_MASK;
    PTA -> PDDR |= 0X00000000;
    PTB -> PDDR |= 0XFFFFFFFF;
    int arrayPinBpositivo[]={0,2,4,6};
    int arrayPinBnegativo[]={1,3,5,7};
    while(1){
       uint32_t EST_B =  PTB -> PDIR & (1u<<0);
        PTB -> PDOR|= EST_B;
            if(EST_B==1){
                

                 PSOR |= (1u<<arrayPinBpositivo(i));
                 PSOR |= (0u<<arrayPinBnegativo(i));

            }else{
                for(int i=0;i<4;i++){
                 PSOR |= (1u<<arrayPinBnegativo(i));
                 PSOR |= (0u<<arrayPinBpositivo(i));
            }


        }
        }
    return 0;
}