#include <stdio.h>

int product(const void *x, void *y);
int main()
{
    int x = 2;
    int y = 40;
    float a = 30;
    float b = 20;

    printf("Answer: %d * %d = %d\n", x, y, product(&x, &y));
    printf("Answer: %f * %f = %f\n", a, b, product(&a, &b));
    return (0);
};
int product(const void *x, void *y)
{

    int *a = (int *)x;
    int *b = (int *)y;

    return *a * *b;
}
int product(const void *x, void *y)
{

    int *a = (float *)x;
    int *b = (float *)y;

    return *a * *b;
}