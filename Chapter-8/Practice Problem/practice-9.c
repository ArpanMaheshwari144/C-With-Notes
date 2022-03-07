#include <stdio.h>
#include <string.h>
void main()
{
    char str[100], c;
    int i, len, f = 0;
    printf("Enter a string:");
    gets(str);
    len = strlen(str);
    printf("Enter a character to find its position:");
    scanf("%c", &c);
    for (i = 0; i < len; i++)
    {
        if (str[i] == c)
        {
            printf("Character position:\n%d", i + 1);
            f = 1;
        }
    }
    if (f == 0)
    {
        printf("Character not found");
    }
}