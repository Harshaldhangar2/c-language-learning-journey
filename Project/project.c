#include <stdio.h>

#define MAX_READINGS 10

float calculate_average(float readings[], int count) {
    float sum = 0.0f;

    // TODO: Add all readings using a loop
    for (int i=0; i<count; i++){
        sum=readings[i]+sum;
    }
    // TODO: Return the average
float avg= sum/count;
    return avg; // Replace this
}

int main(void) {
    float readings[MAX_READINGS];
    int count;

    printf("How many readings? ");

    if (scanf("%d", &count) != 1 ||
        count < 1 || count > MAX_READINGS) {
        printf("Invalid count\n");
        return 1;
    }

    // TODO: Input each reading and validate it
for(int i=0; i<count; i++){
    float inpr;
printf("Please give the input reading \n");

if(scanf("%f" ,&inpr)!=1){
    printf("Error Message \n");
    printf("Please write the float val only \n");
    return 1;
    
}
readings[i]=inpr;
}
    // TODO: Calculate minimum, maximum, average
float min=readings[0];
float max=readings[0];
for (int i = 0; i < count; i++)
{
    if(readings[i]>max){
        max=readings[i];
    }
    if (readings[i]<min){
        min=readings[i];
    }
    
}
float avg;
    
        avg=calculate_average(readings,count);
        printf("%.2f \n",min);
        printf("%.2f \n",max);
        printf("%.2f \n",avg);


    // TODO: Open sensor_log.txt for writing
    FILE *fp=fopen("sensor_log.txt","w");
    // TODO: Save readings and summary
    if(fp==NULL){
        printf("Couldnt open the file hehe ");
        return 1;
    }
    fprintf(fp,"Sensor Readings: \n");
    for (int i=0; i<count; i++){
        fprintf(fp," %.2f\n",readings[i]);
        fprintf(fp, "\nMinimum: %.2f\n", min);
        fprintf(fp, "Maximum: %.2f\n", max);
        fprintf(fp, "Average: %.2f\n", avg);
    }
    // TODO: Close the file
fclose(fp);
printf("Data Saved to Sensor_Log.txt \n");
    return 0;
}