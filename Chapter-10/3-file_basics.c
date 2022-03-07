#include <stdio.h>

int main()
{
    FILE *ptr;
    int num1;
    ptr = fopen("text/Arpan1.txt", "r");
    if (ptr == NULL)
    {
        printf("This file does not exists\n");
    }
    else
    {
        fscanf(ptr, "%d", &num1);
        printf("The value of the num1 %d", num1);
        fclose(ptr);
    }
    return 0;
}