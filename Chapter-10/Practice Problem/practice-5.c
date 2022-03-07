#include <stdio.h>

int main()
{
    FILE *ptr;
    int num;
    ptr = fopen("text/4.txt", "r");
    fscanf(ptr, "%d", &num);
    ptr = fopen("text/4.txt", "w");
    fprintf(ptr, "The number is %d after double of its value is %d\n", num, (num * 2));
    fclose(ptr);
    return 0;
}