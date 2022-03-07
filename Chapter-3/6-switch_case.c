#include <stdio.h>

int main()
{
    int rating;
    printf("Enter your rating on a scale of 1 to 5\n");
    scanf("%d", &rating);
    switch (rating)
    {
    case 1:
        printf("Your rating is %d", rating);
        break;

    case 2:
        printf("Your rating is %d", rating);
        break;

    case 3:
        printf("Your rating is %d", rating);
        break;

    case 4:
        printf("Your rating is %d", rating);
        break;

    case 5:
        printf("Your rating is %d", rating);
        break;

    default:
        printf("Invalid Rating");
        break;
    }

    return 0;
}