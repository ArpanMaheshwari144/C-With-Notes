#include <stdio.h>

struct vector
{
    int x, y;
};

struct vector sumVector(struct vector v1, struct vector v2)
{
    struct vector result;
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
    return result;
}

int main()
{
    struct vector v1, v2, sum;
    v1.x = 3;
    v1.y = 4;
    printf("X dimension is %d Y dimension is %d\n", v1.x, v1.y);

    v2.x = 6;
    v2.y = 5;
    printf("X dimension is %d Y dimension is %d\n", v2.x, v2.y);

    sum = sumVector(v1, v2);
    printf("X dimension of result is %d Y dimension of result is %d\n", sum.x, sum.y);

    return 0;
}