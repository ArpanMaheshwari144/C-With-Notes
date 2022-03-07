#include <stdio.h>

int main()
{
    FILE *ptr;
    char c;
    ptr = fopen("text/fgetc.txt", "r");
    c = fgetc(ptr);
    while (c != EOF)
    {
        printf("%c", c);
        c = fgetc(ptr);
    }
    fclose(ptr);

    return 0;
}