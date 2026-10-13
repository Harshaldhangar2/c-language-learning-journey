#include<stdio.h>

int main(){
    FILE *fp = fopen("data.txt", "r");
        if (fp == NULL) {
        printf("Could not open file\n");
        return 1;
    }
     char line[100];

    while (fgets(line, sizeof line, fp) != NULL) {
        printf("%s", line);
    }
        fclose(fp);
    return 0;
};