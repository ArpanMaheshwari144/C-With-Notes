// %d for integers

// %f for real values

// %c for characters

#include <stdio.h>

int main()
{
    int a = 4;
    // int b=8.6; // not recommended bcoz 8.5 is not a integer
    float b = 8.77;
    char c = 'u';

    printf("The value of a is %d \n", a);
    printf("The value of b is %f \n", b);
    printf("The value of c is %c", c);

    return 0;
}
