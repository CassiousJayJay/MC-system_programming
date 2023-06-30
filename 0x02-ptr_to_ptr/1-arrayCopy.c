
#include <stdio.h>

int arrayCopy(int *B, int *A, int n)
{
    // loop through the elements of A
    for (int i = 0; i < n; i++)
    {
        // copy each element to the corresponding position in B
        B[i] = A[i];
    }
    // return the number of elements copied
    return n;
}