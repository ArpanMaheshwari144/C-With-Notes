#include <stdio.h>

void display(int i);

int main()
{
    int i = 3;
    printf("The address of the variable i is %u\n", &i);
    display(i); // this wll pass a copy of i to the display function
    return 0;
}

void display(int i)
{
    printf("The address of the variable i is %u\n", &i);
}