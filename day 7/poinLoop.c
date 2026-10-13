#include<stdio.h>

int main(){

    int arr[5]={23,34,35,56,45};

    int *ptr =arr;

    for(int i=0; i<5; i++){
        printf("%d \n",*(ptr+i));
    }
}