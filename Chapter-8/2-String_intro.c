#include <stdio.h>

int main()
{
    char str[] = "Arpan";
    char *ptr = str;
    while (*ptr != '\0')
    {
        printf("%c", *ptr);
        ptr = ptr + 1;
    }
    return 0;
}