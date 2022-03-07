#include <stdio.h>

int main()
{
    // do-while loop runs exactly one times whether condition is true or false
    int i = 0;
    do
    {
        printf("The value of i is %d\n", i);
        i = i + 1;
    } while (i <= 10);

    return 0;
}