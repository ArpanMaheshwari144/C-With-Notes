#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("text/table.txt", "w");
    int n, i;
    printf("Enter an integer: ");
    scanf("%d", &n);
    for (i = 1; i <= 10; ++i)
    {
        fprintf(ptr, "%d X %d = %d \n", n, i, n * i);
    }
    printf("Successsfully generated the table of %d in table.txt", n);
    fclose(ptr);
    return 0;
}