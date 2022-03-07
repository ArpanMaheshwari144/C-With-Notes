#include <stdio.h>

int main()
{
    FILE *fptr;
    int num = 11;
    fptr = fopen("text/generated.txt", "w");
    fprintf(fptr, "The number is %d\n", num);
    fprintf(fptr, "Thanks this is Arpan Maheshwari signing off");
    fclose(fptr);
    return 0;
}