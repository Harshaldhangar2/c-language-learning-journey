#include<stdio.h>
//Accessing array elements
int main(void){

int arr[5]={21,23,45,67,68};

printf("%d\n",arr[4]);
//Changing array values
arr[3]=45;
printf("%d\n",arr[3]);

//Using loops with arrays
for(int i=1; i<5; i++){
    printf("%d\n",arr[i]);

}
//Printing a string
char name[]="MASTER";
printf("%s\n",name);
    return 0;
}
