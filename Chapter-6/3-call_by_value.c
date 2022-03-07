#include <stdio.h>

int sum(int a, int b);

int main()
{
    int a = 5, b = 7;
    printf("The value of a and b before function call is %d and %d\n", a, b);

    // this will pass a copy of a and b to sum function so a and b is not changable
    printf("The sum of a and b is %d\n", sum(a, b)); // call by value
    printf("The value of a and b after function call is %d and %d\n", a, b);
    return 0;
}

int sum(int a, int b)
{
    int c;
    c = a + b;
    a = 12;
    b = 13;
    return c;
}