#include <stdio.h>

void encrypt(char *c)
{
    char *ptr = c;
    while (*ptr != '\0')
    {
        *ptr = *ptr + 1;
        ptr = ptr + 1;
    }
}
int main()
{
    char c[] = "Arpan";
    encrypt(c);
    printf("Encrypted string is: %s", c);
    return 0;
}