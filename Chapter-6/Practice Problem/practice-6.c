#include <stdio.h>

void func(int a);

int main()
{
    int a = 3;
    int *ptr;
    ptr = &a;
    printf("The value of the variable a in main function before calling function is %d\n", a);
    printf("The address of the variable a in main function before calling function is %u\n", ptr);

    // this will sends copy of a in func function
    func(a);

    printf("The value of the variable a in main function after calling function is %d\n", a);
    printf("The address of the variable a in main function after calling function is %u\n", ptr);

    return 0;
}

void func(int a)
{
    for (int i = 1; i <= 10; i++)
    {
        printf("The value of the variable a in function is %d\n", a);
    }
    a = 4;
}