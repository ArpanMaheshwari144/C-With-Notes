#include <stdio.h>

int countPositiveNumbers(int *arr, int n)
{
    int pos_count = 0;
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] > 0)
            pos_count++;
    }
    return pos_count;
}

int countNegativeNumbers(int *arr, int n)
{
    int neg_count = 0;
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] < 0)
            neg_count++;
    }
    return neg_count;
}

void printArray(int *arr, int n)
{
    int i;

    printf("Array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {2, -1, 5, 6, 0, -3};

    printArray(arr, 6);

    printf("Count of Positive elements = %d\n",
           countPositiveNumbers(arr, 6));
    printf("Count of Negative elements = %d\n",
           countNegativeNumbers(arr, 6));

    return 0;
}
