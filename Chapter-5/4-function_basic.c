#include <stdio.h>

int sum(int a, int b); // function prototype declaration
int main()
{
    int result;
    result = sum(5, 15); // function call
    printf("The sum is %d", result);
    return 0;
}

// functio definition
int sum(int a, int b)
{
    int c;
    c = a + b;
    return c;
}