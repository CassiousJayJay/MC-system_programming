#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i, sum = 0;
    int n = atoi(argv[1]);
    for (i = 0; i < n; i++)
        sum += random() % n;
    printf("the sum is %d \n", sum);
}

int add(int sum, int num)
{
    return sum + num;
}

int main(int argc, char *argv[])
{
    int i, sum = 0;
    int n = atoi(argv[1]);
    for (i = 0; i < n; i++)
        sum = add(sum, random() % n);
    printf("the sum is %d \n", sum);
}