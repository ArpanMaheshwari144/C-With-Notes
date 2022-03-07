#include <stdio.h>

int main()
{
    int num1, num2, num3, num4;
    printf("Enter first number\n");
    scanf("%d", &num1);
    printf("Enter second number\n");
    scanf("%d", &num2);
    printf("Enter third number\n");
    scanf("%d", &num3);
    printf("Enter fourth number\n");
    scanf("%d", &num4);
    if (num1 > num2)
    {
        if (num1 > num3)
        {
            if (num1 > num4)
            {
                printf("%d is greatest number", num1);
            }
            else
            {
                printf("%d is greatest number", num4);
            }
        }
    }
    else if (num2 > num3)
    {
        if (num2 > num4)
        {
            printf("%d is greatest number", num2);
        }
        else
        {
            printf("%d is greatest number", num4);
        }
    }
    else if (num3 > num4)
    {
        printf("%d is greatest number", num3);
    }
    else
    {
        printf("%d is greatest number", num4);
    }

    return 0;
}