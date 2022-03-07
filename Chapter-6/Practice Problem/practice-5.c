#include <stdio.h>

int main()
{
    int i = 34;
    int *ptr;
    int **ptr_ptr;
    ptr = &i;
    ptr_ptr = &ptr;
    printf("The value of i is %d\n", **ptr_ptr);
    printf("The address of i in single pointer is %d\n", &ptr);
    printf("The address of i in double pointer is %d", &ptr_ptr);

    return 0;
}