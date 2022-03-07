#include <stdio.h>
int main()
{
    int i = 8;
    int *j;
    j = &i; // j will now store the address of i
    printf("Value of i=%d\n", i);
    printf("Value of i=%d\n", *j);    // (*) -> "value at address" operator
    printf("Value of i=%d\n", *(&i)); // & -> indicates "address of" operator
    printf("Address of i=%u\n", j);
    printf("Address of i=%u\n", &i);
    printf("Address of j=%u\n", &j);
    return 0;
}
