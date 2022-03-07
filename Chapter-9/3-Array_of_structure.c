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
    struct employee e1[100];

    e1[0].id = 1;
    e1[0].salary = 1000.898;
    strcpy(e1[0].name, "Arpan");

    e1[1].id = 2;
    e1[1].salary = 2000.898;
    strcpy(e1[1].name, "Adarsh");

    e1[2].id = 1;
    e1[2].salary = 3000.898;
    strcpy(e1[2].name, "Verma");

    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", e1[i].id);
        printf("%f\n", e1[i].salary);
        printf("%s\n", e1[i].name);
    }

    return 0;
}