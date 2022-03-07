#include <stdio.h>

void change(int a);

int main()
{
    int a = 77;
    printf("The value of a before calling change function is %d\n", a);
    change(a);
    printf("The value of a after calling change function  is %d\n", a);

    return 0;
}

void change(int a)
{
    a = 34;
}