#include<stdio.h>
/*
void hello()
{
    printf("HEllo\n");
}

int main(){
    hello();

    return 0;
} */
//Functions with parameters
/*
void greet( int age){
    printf("THe age is %d \n",age);
}

int main(){
    greet(21);
    return 0;
}*/
//Functions that return a value

int add(int a, int b){
    return a+b;
}
int main(){
    int result =add(23,35);
    printf("The addition is %d",result);
    return 0;
}