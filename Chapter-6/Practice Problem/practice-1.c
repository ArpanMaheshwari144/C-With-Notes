#include <stdio.h>

int main()
{
    // int a = 3;
    // printf("The address of the variable a is %u\n", &a);
    // printf("The value of the variable a is %d", *(&a));
    // return 0;

    int a = 3;
    int *ptr;
    ptr = &a;
    printf("The address of the variable a is %u\n", ptr);
    printf("The value of the variable a is %d", *ptr);
    return 0;
}