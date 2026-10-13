#include<stdio.h>


int main(void){

 int matrix[2][3]={{23 , 25, 35},{ 34 , 25 , 36}};


 for(int i=0; i<2; i++){
    for(int j=0; j<3; j++){
        printf("%d ",matrix[i] [j]);
    }
    printf("\n"); }
return 0;
}