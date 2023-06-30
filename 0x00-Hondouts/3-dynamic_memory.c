#include <stdio.h>
#include <stdlib.h>

int main()
{

    int u = 10;
    int *y = malloc(sizeof(int) + 3);

    if (y == NULL)
    {
        printf("cannot use the variable");
    }
    else
    {
        *y = 6000;
        printf("y: %d\n", *y);
    }

    float *n = (float *)malloc(30);
    int p[] = {2, 4, 6, 8, 9, 0, 67};
    p[8] = 300;

    printf("size: %d\n", p[30]);
    printf("seize: %ld\n", sizeof(u));
    printf("size: %ld\n", sizeof(y));
    printf("size: %ld\n", sizeof(n));
    free(y);
    free(n);
    return 0;
}