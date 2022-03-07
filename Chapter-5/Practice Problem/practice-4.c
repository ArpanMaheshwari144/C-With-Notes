#include <stdio.h>

int fibonacci(int n);
int main()
{
    int num;
    int result;

    printf("Enter the nth number in fibonacci series: ");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("Fibonacci of negative number is not possible.\n");
    }
    else
    {
        result = fibonacci(num);
        printf("The %dth number in fibonacci series is %d\n", num, result);
    }
    return 0;
}

int fibonacci(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return (fibonacci(n - 1) + fibonacci(n - 2));
    }
}