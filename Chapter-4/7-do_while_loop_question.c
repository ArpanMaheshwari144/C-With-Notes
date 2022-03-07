#include <stdio.h>

int main()
{
    int i = 1;
    int num;
    printf("Enter a number where till you want to print the natural numbers\n");
    scanf("%d", &num);
    printf("Natural numbers are ");
    do
    {
        printf("%d ", i);
        i = i + 1;
    } while (i <= num);

    return 0;
}