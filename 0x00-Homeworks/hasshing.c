#include <stdio.h>
#include <string.h>

#define MAX 1000

int hash(char *str)
{
    int sum = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        sum += str[i];
    }
    return sum % MAX;
}

int main()
{
    char str[MAX];
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Hash value of %s is %d\n", str, hash(str));
    return 0;
}