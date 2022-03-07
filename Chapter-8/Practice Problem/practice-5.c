#include <stdio.h>

void my_func_strcpy(char *source, char *destination)
{
    char temp[20] = {'\0'};
    int index = 0;

    while (destination[index] != '\0')
    {
        source[index] = destination[index];
        index++;
    }

    for (index = 0; index < 20; index++)
    {
        source[index] = '\0';
    }
}

int main()

{

    char source[20] = "I am source";
    char destination[20] = "I am destination";

    printf("The source is '%s' \n", source);
    printf("The destination is '%s' \n", destination);

    my_func_strcpy(source, destination);

    printf("The source data now is '%s' \n");
    printf("The destination data now is '%s' \n");
}
