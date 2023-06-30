#include <stdio.h>

void swap(int *, int *);
void ptr_to_ptr();

int main()
{
    int a = 10;
    int b = 40;
    printf("Before - A: %d, B: %d\n", a, b);
    swap(&a, &b);
    printf("After - A: %d, B: %d\n", a, b);
    return 0;
}

void swap(int *x, int *y)
{
    int tmp = *x;
    *x = *y;
    *y = tmp;
    printf("Inside - A: %d, B: %d\n", *x, *y);
}

void ptr_to_ptr()
{
    int *ptr = NULL;
    int x = 30;
    int *ptr = &x;
    int **ptr_2 = &ptr;
    **ptr_2 = 420;

    printf("x: %i\n", x);
    printf("ptr: %i\n", *ptr);
    printf("ptr_2: %i\n", **ptr_2);
}