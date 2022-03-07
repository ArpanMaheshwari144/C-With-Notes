#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr = (int *)malloc(sizeof(int));
    *arr = 13;
    arr = realloc(arr, 2 * sizeof(int));
    *(arr + 1) = *arr;
    printf("%d\n", (&arr));
    printf("%d\n", *(arr));
    printf("%d\n", *(arr + 1));
    printf("%d", (*arr + 1));

    return 0;
}