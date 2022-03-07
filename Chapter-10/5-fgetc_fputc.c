#include <stdio.h>

int main()
{
    // FILE *ptr;
    // ptr = fopen("text/fgetc.txt", "r");
    // char c = fgetc(ptr); // fgetc reading a file character by character
    // printf("The value of the characetr is %c", c);
    // fclose(ptr);
    // return 0;

    FILE *ptr;
    ptr = fopen("text/fputc.txt", "w");
    putc('c', ptr); // fputc writing in a file character by character
    fclose(ptr);
    return 0;
}