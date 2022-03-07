#include <stdio.h>

void swap(int *x, int *y);

int main()
{
    int x = 5, y = 7;
    printf("The value of x and y before swap is %d and %d\n", x, y);

    // this will pass a address of a and b that means it sends original value of a and b to swap function so a and b is changable
    swap(&x, &y); // call by reference
    printf("The value of x and y after swap is %d and %d\n", x, y);
    return 0;
}

void swap(int *x, int *y)
{
    int temp;
    temp = *x; // temp mei assign kar diya x ka address((*) means value of that address)
    *x = *y;
    *y = temp;
}

/*
this process is work in this way
x=5 y=7 temp
x=5 y=7 temp=5
x=7 y=7 temp=5
x=7 y=5 temp=5
*/