#include <stdio.h>

int main()
{
    // int i, n, factorial = 1;
    // printf("Enter the value which you want to print the factorial: ");
    // scanf("%d", &n);
    // for (i = 1; i <= n; i++)
    // {
    //     factorial = factorial * i;
    // }
    // printf("The factorial of %d is %d", n, factorial);
    // return 0;

    int i = 1, n, factorial = 1;
    printf("Enter the value which you want to print the factorial: ");
    scanf("%d", &n);
    while (i <= n)
    {
        factorial = factorial * i;
        i = i + 1;
    }
    printf("The factorial of %d is %d", n, factorial);
    return 0;
}