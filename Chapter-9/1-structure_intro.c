#include <stdio.h>
#include <string.h>

struct employee
{
    int noOfEmp;
    float salary;
    char name[10];
};

int main()
{
    struct employee e1;
    e1.noOfEmp = 100;
    e1.salary = 45000.0988;
    strcpy(e1.name, "Arpan");

    printf("%d\n", e1.noOfEmp);
    printf("%.2f\n", e1.salary);
    printf("%s", e1.name);

    return 0;
}