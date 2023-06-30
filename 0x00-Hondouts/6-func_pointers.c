#include <stdio.h>

int sum(int x, int y)
{
    return x + y;
}
int (*addTwoNums)(int, int);
int main()
{
    int x = 10;
    int y = 30;

    addTwoNums = sum;
    int z = addTwoNums(x, y);
    printf("Answer: %d\n", z);

    return (0);
}