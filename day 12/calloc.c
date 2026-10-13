#include<stdio.h>
#include<accctrl.h>

int main(){
    int *p=calloc(3, sizeof *p);

    if(p==NULL){
        return 1;
    }
    //The usual int representations have all-bits-zero as integer zero. Strictly speaking, C guarantees that calloc() initializes bytes to zero; all-bits-zero is not guaranteed to represent zero for every possible type on every implementation.
}
