#include <stdio.h>
#include <stdlib.h> // for realloc,malloc

int main()
{
    int *ptr;
    int n, i;
    printf("Enter an integer: ");
    scanf("%d", &n);

    ptr = (int *)malloc(10 * sizeof(int)); // space for 5 interger numbers of size int i.e size of int is 4
    for (i = 1; i <= 10; ++i)
    {
        printf("%d X %d = %d \n", n, i, n * i);
    }

    // reallocate ptr using realloc()
    ptr = realloc(ptr, 15 * sizeof(int));
    printf("\nAfter reallocating.....\n");
    for (int i = 1; i <= 15; i++)
    {
        printf("%d X %d = %d \n", n, i, n * i);
    }

    return 0;
}