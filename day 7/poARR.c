#include<stdio.h>

int main(){
    //Access elements through a pointer
    /*
    int arr[3]={23,24,45};

    int *ptr=arr;

    printf("%d \n",*ptr);
    printf("%d \n",(*ptr +1));
    printf("%d \n",(*ptr +3));*/
    int arr[3] = {10, 20, 30};
    int *ptr = arr;

    printf("%d\n", *ptr);
    printf("%d\n", *(ptr + 1));
    printf("%d\n", *(ptr + 2));
    
    return 0;
}