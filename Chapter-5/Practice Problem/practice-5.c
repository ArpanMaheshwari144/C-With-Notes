#include <stdio.h>

int main()
{
    int a = 3;
    printf("%d %d %d\n", a, ++a, a++); // arguments are passed from right to left it is based on the behaviour of compiler
    return 0;
}