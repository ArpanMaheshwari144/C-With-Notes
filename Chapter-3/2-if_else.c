#include <stdio.h>

int main()
{
    // int age;
    // printf("Enter your age\n");
    // scanf("%d", &age);
    // if (age > 90)
    // {
    //     printf("You are above 90,you cannot drive");
    // }
    // else
    // {
    //     printf("You can drive");
    // }
    // return 0;

    // int age;
    // printf("Enter your age\n");
    // scanf("%d", &age);
    // if (age >= 90)
    // {
    //     printf("You are above or equal to 90,you cannot drive");
    // }
    // else
    // {
    //     printf("You can drive");
    // }
    // return 0;

    int age;
    printf("Enter your age\n");
    scanf("%d", &age);
    if (age >= 90)
    {
        printf("You are above or equal to 90,you cannot drive\n");
    }
    else
    {
        printf("You can drive\n");
    }
    if (age == 50)
    {
        printf("Half Century");
    }
    return 0;
}