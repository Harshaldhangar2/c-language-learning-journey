#include<stdio.h>


struct Device
{
    float temprature;
    int id;
    char status;
};

int main(void){
    struct Device d1;
    d1.id=101;
    d1.status='a';
    d1.temprature=90.5f;

    printf("ID %d \n",d1.id);
    printf("character %c \n",d1.status);
    printf("Temprature %f \n",d1.temprature);
 
}