#include <stdio.h>

int main()
{
    FILE *ptr;
    int num1, num2, num3;
    ptr = fopen("text/1.txt", "r");
    fscanf(ptr, "%d %d %d", &num1, &num2, &num3);
    printf("The values inside the file is %d %d %d", num1, num2, num3);
    fclose(ptr);
    return 0;
}