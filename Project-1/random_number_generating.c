// if we calculate a modulus of any number by n(n is a number) so ouput is become in range of n

#include <stdio.h>
#include <stdlib.h> // library for random function
#include <time.h>   // library for time function

int main()
{
    // int number;
    // srand(time(0));  // srand(time(0)) use for generating random number by the help of rand() function
    // number = rand(); // --> this is generating a random number from 0 to infinite
    // printf("The random number is %d", number);
    // return 0;

    // int number;
    // srand(time(0));        // srand(time(0)) use for generating random number by the help of rand() function
    // number = rand() % 100; // --> this is generating a random number from 0 to 100
    // printf("The random number is %d", number);
    // return 0;

    int number;
    srand(time(0));            // srand(time(0)) use for generating random number by the help of rand() function
    number = rand() % 100 + 1; // --> this is generating a random number from 1 to 100
    printf("The random number is %d", number);
    return 0;
}