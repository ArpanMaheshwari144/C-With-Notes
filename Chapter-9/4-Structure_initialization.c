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
    struct employee e1 = {1, 45000.98, "Arpan"};
    printf("Id is: %d\n", e1.id);
    printf("Salary is: %f\n", e1.salary);
    printf("Name is: %s", e1.name);
}