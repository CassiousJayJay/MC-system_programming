#include <stdio.h>
#include <string.h>

void sort(char *arr[], int n)
{
    char *temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (strlen(arr[i]) > strlen(arr[j]))
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main()
{
    char *arr[] = {"apple", "banana", "orange", "kiwi", "grape"};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, n);
    printf("Sorted array of strings by length:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", arr[i]);
    }
    return 0;
}