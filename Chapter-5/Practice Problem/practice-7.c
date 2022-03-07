#include <stdio.h>

void printPattern(int n);
int main()
{
    int n;
    printf("Enter value of n: "); /* Input number of rows from user */
    scanf("%d", &n);
    printPattern(n);
    return 0;
}

void printPattern(int n)
{
    int i, j;
    for (i = 1; i <= n; i++)
    {
        /* Print i number of stars */
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        /* Move to next line */
        printf("\n");
    }
}