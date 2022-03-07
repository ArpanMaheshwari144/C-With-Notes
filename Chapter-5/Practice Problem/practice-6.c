#include <stdio.h>
int addNumbers(int n);
int main()
{
    int num;
    printf("Enter the postive integer nth value to calculte the sum of natural numbers: ");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("Natural numbers do not include negative numbers.\n");
    }
    else
    {
        printf("Sum = %d", addNumbers(num));
    }
    return 0;
}

int addNumbers(int n)
{
    if (n == 0)
    {
        return n;
    }
    else
    {
        return (n + addNumbers(n - 1));
    }
}