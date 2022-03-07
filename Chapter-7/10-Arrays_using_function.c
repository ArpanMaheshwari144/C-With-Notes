#include <stdio.h>

void printArray(int ptr[], int n);

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    printArray(arr, 6);
    return 0;
}

void printArray(int ptr[], int n)
{
    printf("******Before appling changes******\n");
    for (int i = 0; i < n; i++)
    {
        printf("The value of element %d is %d\n", i + 1, ptr[i]);
    }

    ptr[2] = 7; // this value will reflect changes in main arr array

    printf("******After appling changes******\n");
    for (int i = 0; i < n; i++)
    {
        printf("The value of element %d is %d\n", i + 1, ptr[i]);
    }
}