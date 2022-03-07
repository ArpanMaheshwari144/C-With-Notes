#include <stdio.h>
#include <math.h>

int main()
{
    float a = 4;
    float b = 8;
    printf("The value of a + b is: %f \n", a + b);
    printf("The value of a - b is: %f \n", a - b);
    printf("The value of a * b is: %f \n", a * b);
    printf("The value of a / b is: %f \n", a / b);

    int z;
    z = b * a; //legal
    // b *a = z;  //illegal
    printf("The value of z is: %d \n", z);

    printf("5 when divided by 2 leaves a remiander of %d \n", 5 % 2);
    printf("-5 when divided by 2 leaves a remiander of %d \n", -5 % 2);
    printf("5 when divided by -2 leaves a remiander of %d \n", 5 % -2); //sign is same as of numerator

    printf("5 to the power 2 is %f \n", pow(5, 2)); // returns double

    // type conversion
    printf("The value of 6 + 5 is %d \n", 6 + 5);
    printf("The value of 6 + 5.6 is %f \n", 6 + 5.6);
    printf("The value of 6.1 + 5.6 is %f \n", 6.1 + 5.6);

    printf("The value of 5/2 is %d \n", 5 / 2);
    printf("The value of 3.0/9 is %f \n", 3.0 / 9);

    return 0;
}