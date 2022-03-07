#include <stdio.h>
#include <string.h>

int main()
{
    char s1[45] = "Arpan";
    char *s2 = "Arpan";
    int val = strcmp(s1, s2);
    printf("The comparison of two string is %d", val);
    return 0;
}