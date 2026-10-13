#include<stdio.h>

int main(){
    //The & operator — get an address
    int a=35;
    int *ptr =&a;
    printf("%d \n",a);
    printf("%d \n",(void *)&a);

    //A pointer is a variable that stores a memory address.
    
    printf("Age: %d \n",*ptr);
}