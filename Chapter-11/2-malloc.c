#include <stdio.h>
#include <stdlib.h> // for malloc

int main()
{
    float *ptr;

    ptr = (float *)malloc(6 * sizeof(float)); // space for 6 float numbers of size float i.e size of float is 4
    for (int i = 0; i < 6; i++)
    {
        printf("Enter the value of %d element: ", i);
        scanf("%f", &ptr[i]);
    }
    for (int i = 0; i < 6; i++)
    {
        printf("The value of %d element is: %.2f\n", i, ptr[i]);
    }

    return 0;
}