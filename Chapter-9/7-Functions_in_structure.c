#include <stdio.h>
#include <string.h>

struct student
{
    int id;
    char name[20];
    float percentage;
};

void func(struct student s1)
{
    printf(" Id is: %d \n", s1.id);
    printf(" Name is: %s \n", s1.name);
    printf(" Percentage is: %f \n", s1.percentage);
}

int main()
{
    struct student s1;

    s1.id = 1;
    strcpy(s1.name, "Arpan");
    s1.percentage = 86.5;

    func(s1);
    return 0;
}
