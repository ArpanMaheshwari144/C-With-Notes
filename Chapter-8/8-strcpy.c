#include <stdio.h>
#include <string.h>

int main()
{
    char *st1 = "Arpan";
    char st2[45];
    strcpy(st2, st1);
    printf("Now st2 is %s", st2);
    return 0;
}