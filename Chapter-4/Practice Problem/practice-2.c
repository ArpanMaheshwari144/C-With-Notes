#include <stdio.h>

int main()
{
    printf("Multiplication table of 10 in reverse order\n");
    for (int i = 10; i >= 1; i--)
    {
        printf("10 X %d=%d\n", i, 10 * i);
    }
    return 0;
}