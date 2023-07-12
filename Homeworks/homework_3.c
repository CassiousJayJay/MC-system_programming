#include <stdio.h>

int mystrcpy(char *s1, char *s2)
{
    int n = strlen(s2), i;
    for (i = 0; i <= n; i++)
        s1[i] = s2[i];
}