#include <stdio.h>
#include <string.h>

struct employee
{
    int id;
    float salary;
    char name[10];
};

int main()
{
    struct employee e1, e2, e3;
    printf("Enter the id of e1: ");
    scanf("%d", &e1.id);
    printf("Enter the salary of e1: ");
    scanf("%f", &e1.salary);
    printf("Enter the name of e1: ");
    scanf("%s", e1.name); // because this is a array

    printf("Enter the id of e2: ");
    scanf("%d", &e2.id);
    printf("Enter the salary of e2: ");
    scanf("%f", &e2.salary);
    printf("Enter the name of e2: ");
    scanf("%s", e2.name);

    printf("Enter the id of e3: ");
    scanf("%d", &e3.id);
    printf("Enter the salary of e3: ");
    scanf("%f", &e3.salary);
    printf("Enter the name of e3: ");
    scanf("%s", e3.name);

    printf("%d\n", e1.id);
    printf("%.2f\n", e1.salary);
    printf("%s\n", e1.name);

    printf("%d\n", e2.id);
    printf("%.2f\n", e2.salary);
    printf("%s\n", e2.name);

    printf("%d\n", e3.id);
    printf("%.2f\n", e3.salary);
    printf("%s", e3.name);

    return 0;
}