#include <stdio.h>

int main()
{
    // int n, prime = 0;
    // printf("Enter a number check for prime or not: ");
    // scanf("%d", &n);
    // for (int i = 2; i <= n / 2; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         prime = 1;
    //         break;
    //     }
    // }
    // if (n == 1)
    // {
    //     printf("1 is neither prime nor composite.");
    // }
    // else
    // {
    //     if (prime == 0)
    //     {
    //         printf("%d is prime", n);
    //     }
    //     else
    //     {
    //         printf("%d is not prime", n);
    //     }
    // }

    // return 0;

    int i = 2, n, prime = 0;
    printf("Enter a number check for prime or not: ");
    scanf("%d", &n);
    while (i <= n / 2)
    {
        if (n % i == 0)
        {
            prime = 1;
            break;
        }
        i = i + 1;
    }
    if (n == 1)
    {
        printf("1 is neither prime nor composite.");
    }
    else
    {
        if (prime == 0)
        {
            printf("%d is prime", n);
        }
        else
        {
            printf("%d is not prime", n);
        }
    }

    return 0;
}