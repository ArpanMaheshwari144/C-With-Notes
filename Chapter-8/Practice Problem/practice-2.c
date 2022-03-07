#include <stdio.h>
#include <string.h>

int main()
{
    char str1[20];
    char str2[20];
    char c;
    int i = 0;

    printf("Enter a string1: ");
    scanf("%s", str1);
    printf("Enter a string2 character by character\n");
    while (c != '\n')
    {
        fflush(stdin); // jo phle character aa chuka hai usko khatam kardo
        scanf("%c", &c);
        str2[i] = c;
        i = i + 1;
    }
    str2[i - 1] = '\0';
    printf("The value of str1 is %s\n", str1);
    printf("The value of str2 is %s\n", str2);
    printf("The comparison of two string is %d", strcmp(str1, str2));
    return 0;
}