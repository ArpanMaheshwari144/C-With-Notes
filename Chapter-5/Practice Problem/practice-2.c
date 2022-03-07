#include <stdio.h>

int main()
{

    float celsius, fahrenheit;

    // Input temperature in celsius
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // celsius to fahrenheit conversion formula
    fahrenheit = (celsius * 9 / 5) + 32;

    // %.2f is used to print fractional numbers up to two decimal places. You can also use %f to print fractional normally up to six decimal places.
    printf("%.2f Celsius = %.2f Fahrenheit", celsius, fahrenheit);

    return 0;
}