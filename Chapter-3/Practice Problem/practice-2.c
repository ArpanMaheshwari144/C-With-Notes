#include <stdio.h>

int main()
{
    int subject1, subject2, subject3;
    float total;
    printf("Enter the marks of subject1\n");
    scanf("%d", &subject1);
    printf("Enter the marks of subject2\n");
    scanf("%d", &subject2);
    printf("Enter the marks of subject3\n");
    scanf("%d", &subject3);
    total = (subject1 + subject2 + subject3) / 3;
    if ((total < 40) || (subject1 < 33 || subject2 < 33 || subject3 < 33))
    {
        printf("Your total percentage is %f and you are failed", total);
    }
    else
    {
        printf("Your total percentage is %f and you are pass", total);
    }

    return 0;
}