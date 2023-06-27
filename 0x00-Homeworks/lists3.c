#include <stdio.h>
#include <stdlib.h>

void bsort(void *A, int n, int sizeofblock, int (*compareFunction)(const void *, const void *))
{
    char *p = (char *)A;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (compareFunction(p + j * sizeofblock, p + (j + 1) * sizeofblock) > 0)
            {
                char *temp = (char *)malloc(sizeofblock);
                memcpy(temp, p + j * sizeofblock, sizeofblock);
                memcpy(p + j * sizeofblock, p + (j + 1) * sizeofblock, sizeofblock);
                memcpy(p + (j + 1) * sizeofblock, temp, sizeofblock);
                free(temp);
            }
        }
    }
}