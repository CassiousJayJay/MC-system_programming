#include <stdio.h>
// ANS: code is expecting a command line argument that is not provided
int main(int argc, char *argv[])
{
    FILE *fp = fopen(argv[1], "r");
    return 0;
}

// ANS: it will seg fault. it should be no free of memory and scanf is just ptr, not *ptr
int *ptr = malloc(4);
free(ptr);
scanf("%d", *ptr);

int **A;
foo(&A);

foo(int ***array)
{
    int **arrayint = (int **)malloc(2 * n * sizeof(int *));
    for (i = 0; i < n; i++)
        arrayint[i] = (*array)[i];
    free(*array);
    array = &arrayint;
}

int i = 0;
While(fscanf(infile, "%s", name) > 0)
    strcpy(A[i++], name);
for (j = i; j > 0; j--)
    A[i + 1] = A[i];