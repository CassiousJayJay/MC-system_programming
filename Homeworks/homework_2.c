#include <stdio.h>
#include <stdlib.h>

FILE *fp = open("image.bmp", "r");
char buffer[10000]; /* assume image is 10000 bytes */
fread(fp, 10000, 1, buffer);
for (i = 0; i < 10000; i++)
    printf("%u ", buffer[i]);

FILE *fp = fopen("file", "r");
int i = 0;
char buf[50];
while (fscanf(fp, "%s", buf) > 0)
    i++;
return i;