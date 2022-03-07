#include <stdio.h>
#include <stdlib.h> // for malloc

int main()
{
    int *ptr;

    ptr = (int *)malloc(6 * sizeof(int)); // space for 6 interger numbers of size int i.e size of int is 4
    for (int i = 0; i < 6; i++)
    {
        printf("Enter the value of %d element: ", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 6; i++)
    {
        printf("The value of %d element is: %d\n", i, ptr[i]);
    }

    return 0;
}