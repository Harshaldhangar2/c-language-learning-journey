#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *p = malloc(2 * sizeof *p);

    if (p == NULL) {
        return 1;
    }

    p[0] = 10;
    p[1] = 20;

    int *temp = realloc(p, 4 * sizeof *p);

    if (temp == NULL) {
        free(p);
        return 1;
    }

    p = temp;
    p[2] = 30;
    p[3] = 40;

    printf("%d\n", p[3]);

    free(p);
    return 0;
}