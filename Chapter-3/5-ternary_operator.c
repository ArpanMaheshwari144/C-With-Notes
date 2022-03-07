#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d", &num);
    // one-liner if-else
    (num % 2 == 0) ? printf("%d is even", num) : printf("%d is odd", num);
    return 0;
}