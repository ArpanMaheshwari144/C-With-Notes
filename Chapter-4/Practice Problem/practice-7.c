#include <stdio.h>

int main()
{
    int n, i, sum = 0;
    printf("Enter a number you want to print the table\n");
    scanf("%d", &n);
    for (i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d \n", n, i, n * i);
    }
    for (i = 1; i <= 10; i++)
    {
        sum = sum + (n * i);
    }
    printf("The sum of %d table is %d", n, sum);

    return 0;
}