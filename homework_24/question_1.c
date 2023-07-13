#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

int foo(int, char *, int, int, int, char *);
int openf(char *);
int main(int argc, char *argv[])
{
    int fd, pos, skip, b_size, n;
    char ch, *buff;
    buff = (char *)malloc(sizeof(char));
    printf("\nBlock size: ");
    scanf("%d", &b_size);
    printf("\nNumber of Blocks: ");
    scanf("%d", &n);
    printf("\nBytes to be skiped after each block: ");
    scanf("%d", &skip);
    fd = openf(argv[1]);
    foo(fd, buff, b_size, n, skip, argv[1]);
    close(fd);
}
int foo(int fd, char *buff, int b_size, int n, int skip, char *f)
{
    char ch;
    int i = 0, j = 0, k = 0, m = 0;
    printf("\nPHASE ONE DONE!!\n");
    while (1)
    {
        i = 0;
        for (j = 0;; j++)
        {
            if (j >= n)
                goto i;
            for (k = 0; k < b_size; k++)
            {
                if (!(read(fd, &ch, 1)) || ch == 0)
                i:
                    goto o;
                *(buff + k) = ch;
                buff = realloc(buff, k + 1);
            }
            for (m = 0; m < skip; m++)
                read(fd, &ch, 1);

            printf("\n%s**\n", buff);
            free(buff);
            buff = (char *)malloc(sizeof(char));
        }
    }
o:
    printf("\n%d blocks of size %d skipping %d bits after each read  are read form file %s\n", n, b_size, skip, f);
}
int openf(char *s)
{
    int fd;
    fd = open(s, O_RDWR | O_CREAT, 0666);
    if (fd < 1)
        perror("open error");
    else
        printf("input file open succesfull fd = %d\n", fd);
    return fd;
}