#include <stdio.h>

int main()
{
    char name[50];
    int salary, i, num;

    printf("Enter number of employees: ");
    scanf("%d", &num);

    FILE *fptr;
    fptr = (fopen("text/emp.txt", "w"));
    if (fptr == NULL)
    {
        printf("Error!");
    }

    for (i = 0; i < num; ++i)
    {
        printf("For employee%d\nEnter name: ", i + 1);
        scanf("%s", name);

        printf("Enter salary: ");
        scanf("%d", &salary);

        fprintf(fptr, "\nName: %s \nSalary=%d \n", name, salary);
    }

    fclose(fptr);
    return 0;
}