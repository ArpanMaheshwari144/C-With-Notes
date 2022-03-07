#include <stdio.h>

struct vector
{
    int x, y;
};

int main()
{
    struct vector v1, v2;
    v1.x = 34;
    v1.y = 43;
    printf("X dimension is %d Y dimension is %d\n", v1.x, v1.y);

    v2.x = 36;
    v2.y = 44;
    printf("X dimension is %d Y dimension is %d", v2.x, v2.y);

    return 0;
}