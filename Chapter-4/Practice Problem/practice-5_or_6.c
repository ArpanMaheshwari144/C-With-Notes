#include <stdio.h>

int main()
{
    // int i, n, sum = 0;
    // printf("Enter a number: ");
    // scanf("%d", &n);
    // for (i = 1; i <= n; i++)
    // {
    //     sum = sum + i;
    // }
    // printf("The sum of first %d natural number is %d", n, sum);
    // return 0;

    // int i = 1, n, sum = 0;
    // printf("Enter a number: ");
    // scanf("%d", &n);
    // while (i <= n)
    // {
    //     sum = sum + i;
    //     i++;
    // }
    // printf("The sum of first %d natural number is %d", n, sum);
    // return 0;

    int i = 1, n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    do
    {
        sum = sum + i;
        i++;
    } while (i <= n);
    printf("The sum of first %d natural number is %d", n, sum);
    return 0;
}