#include <stdio.h>
#include <string.h>

int main()
{
    char s1[45] = "Hello";
    char *s2 = "Arpan";
    strcat(s1, s2);
    printf("The concatenation of two string is %s", s1);
    return 0;
}