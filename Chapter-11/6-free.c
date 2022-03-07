#include <stdio.h>
#include <stdlib.h> // for malloc,free

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
    free(ptr); // free -> jo memory allocate hui thi ptr ko wo ab free ho chuki hai
    return 0;
}