#include <stdio.h>

int main()
{
    // int age;
    // printf("Enter your age\n");
    // scanf("%d", &age);
    // if (age <= 70 && age >= 18)
    // {
    //     printf("You are above 18 and below 70, you can drive");
    // }
    // else
    // {
    //     printf("You cannot drive");
    // }
    // return 0;

    // int age;
    // int vipPass;
    // printf("Enter your age\n");
    // scanf("%d", &age);
    // printf("You have a VIP Pass? Press 1 for Yes and 0 for No\n");
    // scanf("%d", &vipPass);
    // if ((age <= 70 && age >= 18) || vipPass == 1)
    // {
    //     printf("You are above 18 and below 70, you can drive");
    // }
    // else
    // {
    //     printf("You cannot drive");
    // }
    // return 0;

    int age;
    printf("Enter your age\n");
    scanf("%d", &age);
    if (age >= 18 && !(age >= 70))
    {
        printf("You are above 18 and not equal to greater than or equal to 70, you can drive");
    }
    else
    {
        printf("You cannot drive");
    }
    return 0;
}