#include <stdio.h>

int main()
{
    FILE *ptr;
    // ptr = fopen("text/sample.txt", "r"); // r for reading in file
    ptr = fopen("text/sample2.txt", "w"); // w for writing in file and if file do not exists it will make a file as well
    fclose(ptr);
    return 0;
}