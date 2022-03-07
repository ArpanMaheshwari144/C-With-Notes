#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number where till you want to print the natural numbers\n");
    scanf("%d", &num);
    printf("Natuaral numbers are ");
    for (int i = 1; i <= num; i++)
    {
        printf("%d ", i);
    }
    return 0;
}