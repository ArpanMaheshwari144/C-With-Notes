#include <stdio.h>

int main()
{
    // int n;
    // printf("Enter a number you want to print the table\n");
    // scanf("%d", &n);
    // for (int i = 1; i <= 10; i++)
    // {
    //     printf("%d X %d = %d \n", n, i, n * i);
    // }

    // return 0;

    int n, i, range;
    printf("Enter a number you want to print the table: ");
    scanf("%d", &n);
    printf("Enter the number where the table should be printed: ");
    scanf("%d", &range);
    for (i = 1; i <= range; ++i)
    {
        printf("%d X %d = %d \n", n, i, n * i);
    }
    return 0;
}