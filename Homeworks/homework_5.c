#include <stdio.h>

int foo(int **ptr, int n)
{
    *ptr = malloc(n * sizeof(int));

    if (*ptr == NULL)
    {
        return -1;
    }
    return 0;
}
int arrayCopy(int *B, int *A, int n)
{
    int i;
    for (i = 0; i < n; i++)
        B[i] = A[i];
    return 0;
}