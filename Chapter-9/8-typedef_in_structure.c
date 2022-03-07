#include <stdio.h>
#include <string.h>

typedef struct student
{
    int id;
    char name[20];
    float percentage;
} stu;

void func(stu e1)
{
    printf(" Id is: %d \n", e1.id);
    printf(" Name is: %s \n", e1.name);
    printf(" Percentage is: %f \n", e1.percentage);
}

int main()
{
    stu e1;
    e1.id = 1;
    strcpy(e1.name, "Arpan");
    e1.percentage = 86.5;

    func(e1);
    return 0;
}
