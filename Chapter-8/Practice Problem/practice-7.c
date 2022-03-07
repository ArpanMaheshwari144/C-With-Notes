#include <stdio.h>

void decrypt(char *c)
{
    char *ptr = c;
    while (*ptr != '\0')
    {
        *ptr = *ptr - 1;
        ptr = ptr + 1;
    }
}
int main()
{
    char c[] = "Bsqbo";
    decrypt(c);
    printf("Decrypted string is: %s", c);
    return 0;
}