#include <stdio.h>

int main()
{
    int numberOfStudents = 3;
    int numberOfSubjects = 5;

    int marks[numberOfStudents][numberOfSubjects];
    for (int i = 0; i < numberOfStudents; i++)
    {
        for (int j = 0; j < numberOfSubjects; j++)
        {
            printf("Enter the marks of student%d in subject%d:", i + 1, j + 1);
            scanf("%d", &marks[i][j]);
        }
    }

    for (int i = 0; i < numberOfStudents; i++)
    {
        for (int j = 0; j < numberOfSubjects; j++)
        {
            printf("You entered the marks of student%d in subject%d is:%d\n", i + 1, j + 1, marks[i][j]);
        }
    }

    return 0;
}