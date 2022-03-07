#include <stdio.h>

void display1();
void display2();
void display3();

int main()
{
    // main calls display2() and display3() indirectly
    display1();
    return 0;
}

void display1()
{
    printf("Good Morning\n"); // printf is a library function
    display2();
}

void display2()
{
    printf("Good Afternoon\n");
    display3();
}

void display3()
{
    printf("Good Night\n");
}