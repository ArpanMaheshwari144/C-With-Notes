#include <stdio.h>

int main()
{
    // 97-122 =a-z  ASCII VALUES
    char ch;
    printf("Enter the character\n");
    scanf("%c", &ch);
    if (ch >= 97 && ch <= 122)
    {
        printf("Your character is in lower case");
    }
    else
    {
        printf("Your character is not in lower case");
    }

    return 0;
}