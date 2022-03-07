#include <stdio.h>

int main()
{
    FILE *ptr;
    int num1;
    int num2;
    ptr = fopen("text/Arpan.txt", "r");
    fscanf(ptr, "%d", &num1);
    fscanf(ptr, "%d", &num2);
    printf("The value of the num1 and num2 is %d and %d", num1, num2);
    fclose(ptr);
    return 0;
}