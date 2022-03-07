#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number from where the natural number will start printing and goes to 1\n");
    scanf("%d", &num);
    printf("Natural numbers are ");
    for (int i = num; i >= 1; i--)
    {
        printf("%d ", i);
    }
    return 0;
}