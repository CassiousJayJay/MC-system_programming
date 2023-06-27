#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Defining comparator function as per the requirement
static int myCompare(const void *a, const void *b)
{

    // setting up rules for comparison
    return strcmp(*(const char **)a, *(const char **)b);
}

// Function to sort the array
void sort(const char *arr[], int n)
{
    // calling qsort function to sort the array
    // with the help of Comparator
    qsort(arr, n, sizeof(const char *), myCompare);
}

int main()
{

    // array of fruits to be sorted
    const char *arr[] = {"oranges", "banannas", "strawberrys"};

    int n = sizeof(arr) / sizeof(arr[0]);
    int i;

    // Print fruits names
    printf("Given array is\n");
    for (i = 0; i < n; i++)
        printf("%d: %s \n", i, arr[i]);

    // Sort fruits names
    sort(arr, n);

    // Print the sorted fruits names
    printf("\nSorted array is\n");
    for (i = 0; i < n; i++)
        printf("%d: %s \n", i, arr[i]);

    return 0;
}
