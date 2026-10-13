#include<stdio.h>
enum state{
    OF,
    ON,
    ERROR
};
int main(void){
enum state motor= ON;
enum state pani = OF;
enum state okk= ERROR;

printf("%d\n",motor);
printf("%d\n",pani);
printf("%d\n",okk);

return 0;
}