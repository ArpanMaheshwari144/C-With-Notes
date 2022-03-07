#include <stdio.h>

int factorial(int x);
int main()
{
    int value;
    printf("Enter a value to calculte factorial: ");
    scanf("%d", &value);
    int result;
    result = factorial(value);
    printf("The factorial of %d is %d", value, result);

    return 0;
}

int factorial(int x)
{
    printf("Calling factorial %d\n", x);
    int f;
    if (x == 0 || x == 1)
    {
        return 1;
    }
    else
    {
        f = x * factorial(x - 1);
    }
    return f;
}
