#include <stdio.h>

float average(int a, int b, int c);
int main()
{
    int x, y, z;
    printf("Enter the three number to calculte the average: ");
    scanf("%d %d %d", &x, &y, &z);
    float result = average(x, y, z);
    printf("The average of three numbers are %f", result);
    return 0;
}

float average(int a, int b, int c)
{
    float d;
    d = (float)(a + b + c) / 3;
    return d;
}