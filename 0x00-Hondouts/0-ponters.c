#include <stdio.h>

int main()
{
    int x = 1000;
    int *y = &x;
    *y = 400;

    printf("y: %d\n", *y);
    printf("y_2: %p\n", y);

    return 0;
}