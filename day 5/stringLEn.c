#include<stdio.h>

int main(){

    char name[]="master";

    printf("%zu\n", strlen(name)); //6
    printf("%zu \n",sizeof(name)); //7

    char  a[]="HEllo";
    char  b[]="HEllo";

    if(strcmp(a,b)==0){
        printf("Hey the string is same as it is");

    }else{
        printf("sorry baeb");
    }
return 0;
}