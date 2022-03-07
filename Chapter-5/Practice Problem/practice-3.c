#include <stdio.h>

float force(float mass);

int main()
{
    float m;
    printf("Enter the value of mass in Kgs: ");
    scanf("%f", &m);
    printf("The value of force in Newton is %.2f", force(m));
    return 0;
}

float force(float mass)
{
    float result;
    result = mass * 9.8;
    return result;
}