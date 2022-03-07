#include <stdio.h>

int occurence(char st[], char c)
{
    char *ptr = st;
    int count = 0;
    while (*ptr != '\0')
    {
        if (*ptr == c)
        {
            count = count + 1;
        }
        ptr = ptr + 1;
    }
    return count;
}
int main()
{
    char st[] = "Arpan";
    int count = occurence(st, 'A');
    printf("Occurences = %d", count);

    return 0;
}