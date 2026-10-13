#include<stdio.h>

int main(void){
    /*int x=10;
printf("%d \n",x<<1);
printf("%d \n",x>>1);*/


//The four operations you'll use in Embedded C
unsigned int reg =0;

reg |=(1u << 1);
reg |=(1u << 3);

printf("%u ",reg);

reg &= ~(1u <<1);
printf("%u\n",reg);
return 0;
}