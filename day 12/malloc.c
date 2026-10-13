#include<stdio.h>
#include<stdlib.h>

int main(void){
int *p=malloc(3 * sizeof *p);

if(p==NULL){
    printf("Allocation failed");
    return 1;
}
p[0]=10;
p[1]=20;
p[3]=30;

printf("%d \n",p[1]);
free(p);
return 0;

}