#include <stdio.h>

int main(){
    printf("hello world in embedded world \n");

    int age =24;
    float marks=8.565;
    char grade ='c';

    printf("Age: %d\n",age);
    printf("Marks : %1.f\n",marks);
    printf("Grade : %c \n",grade);

    printf("int: %zu bytes\n",sizeof(age));
    printf("float %zu bytes\n",sizeof(marks));
    printf("Grade: %zu bytes\n",sizeof(grade));

    //Operator
    int a=90;
    int z=80;
    int c=a+z;
    printf("int : %d\n",c);
    printf("%d\n",z);

    int x=age+5;
    printf("The new age is Age: %d\n",x);
    return 0;
}
