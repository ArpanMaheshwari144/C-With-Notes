#include <stdio.h>

int main()
{
    //char str[] = {'A', 'r', 'p', 'a', 'n','\0'};

    // OR

    char str[] = "Arpan";
    char *ptr = &str[0];
    printf("The address of the string is %d\n", &ptr);
    printf("The address of the string is %d", &ptr + 1);
    return 0;
}