#include<stdio.h>

int main(void){

    int arr []={10,20,30,40};
    int *ptr =arr;

    printf("%d\n",*ptr);
    printf("%d\n",*(ptr+1));
    return 0;
}