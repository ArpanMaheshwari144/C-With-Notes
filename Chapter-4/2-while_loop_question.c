#include <stdio.h>

int main()
{
    // Q -> wap to print natural numbers from 10 to 20 when initial loop counter is initialised to 0
    int i = 0;
    while (i <= 20)
    {
        if (i >= 10)
        {
            printf("The value of i is %d\n", i);
        }
        i = i + 1;
    }
    return 0;
}