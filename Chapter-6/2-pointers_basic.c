#include <stdio.h>

int main()
{
    int i = 8;
    int *j;
    int **k;
    j = &i; // j will now store the address of i
    k = &j; // k will now store the address of j
    printf("Value of i=%d\n", i);
    printf("Value of i=%d\n", *j);    // (*) -> "value at address" operator
    printf("Value of i=%d\n", *(&i)); // & -> indicates "address of" operator
    printf("Value of i=%d\n", **k);
    printf("Address of i=%u\n", j);
    printf("Address of i=%u\n", &i);
    printf("Address of j=%u\n", &j);
    printf("The address of i in single pointer is %d\n", &j);
    printf("The address of i in double pointer is %d", &k);
    return 0;
}