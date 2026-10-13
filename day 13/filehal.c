#include<stdio.h>

int main(void){
    FILE *fp =fopen("data.txt","w");
    if(fp ==NULL){
        printf("Couldnt open the file");
        return 1;
    }
    fprintf(fp,"Temprature: %.1f\n",35.5);
    fprintf(fp,"Sensor ID %d \n",102);
}