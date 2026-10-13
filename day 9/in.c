#include<stdio.h>

int main(){

    int x =10;
    int y=10;
    const int *p =&x;
    //*p=20;
    x=20;
    p=&y;
    printf("%d \n",p);
    //What is a void * pointer?
    
    return 0;
}