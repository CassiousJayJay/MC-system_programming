#include <stdio.h>
#include <dirent.h>
#include <string.h>
#include <limits.h>

void listFiles(char *path, char *str)
{
    DIR *dr = opendir(path);

    if (dr != NULL)
    {
        struct dirent *de;

        while ((de = readdir(dr)) != NULL)
        {
            char *name = de->d_name;

            if (strstr(name, str))
            {
                printf("%s/%s\n", path, name);
            }
        }

        closedir(dr);
    }
}

int main(int argc, char *argv[])
{

    if (argc != 2)
    {
        printf("Usage: %s foo\n", argv[0]);
        return 1;
    }

    listFiles(".", argv[1]);
    return 0;
}