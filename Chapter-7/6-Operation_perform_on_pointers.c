
// Following operations can be performed on pointers:
// Addition of a number to a pointer.
// Subtraction of a number from a pointer
// Subtraction of one pointer from another
// Comparison of two pointer variables

#include <stdio.h>

int main()
{
    // int i = 2;
    // int *a = &i;
    // printf("The value of a pointer before increment is %d\n", a);
    // a = a + 1;
    // printf("The value of a pointer after increment is %d\n", a);
    // return 0;

    // int i = 3;
    // int *a = &i;
    // printf("The value of a pointer before decrement is %d\n", a);
    // a = a - 1;
    // printf("The value of a pointer after decrement is %d\n", a);
    // return 0;

    // int arr[10];
    // int *p1 = arr + 2;
    // int *p2 = arr + 5;
    // printf("The substraction of a one pointer from another pointer is %d", (p2 - p1));
    // return 0;

    int *p1;
    int *p2;
    p2 = (int *)300; // assignment to 'int *' from 'int' makes pointer from integer with casting
    p1 = (int *)200;
    if (p1 > p2)
    {
        printf("p1 is greater than p2");
    }
    else
    {
        printf("p2 is greater than p1");
    }
    return 0;
}