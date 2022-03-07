#include <stdio.h>
#include <stdlib.h> // for calloc

int main()
{
    int *ptr;

    // calloc always returns void pointer but it also return 0 by default if you do not provide specific any value
    ptr = (int *)calloc(6, sizeof(int)); // space for 6 interger of size int i.e size of int is 4
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