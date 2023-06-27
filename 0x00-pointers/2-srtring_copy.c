#include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{
    int char_counter = 0;

    while (src[char_counter] != '\0')
    {
        dest[char_counter] = src[char_counter];
        char_counter++;
    }
    dest[char_counter] = '\0';
    return (dest);
}

int main()
{
    char *x;
    char *y;
    char f[5];
    char u[6] = "Hello";

    x = f;
    y = u;
    ft_strcpy(x, y);
    for (int i = 0; i < 5; i++)
    {
        printf("%c", x[i]);
    }

    return (0);
}