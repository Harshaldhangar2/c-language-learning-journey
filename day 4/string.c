#include<stdio.h>

int main(void){
char name[50];
printf("Enter your Name:  ");

if (fgets(name,sizeof(name),stdin)!=NULL)
{
    printf("HEllo %s \n",name);

}
return 0;
}