#include <stdio.h>

void slice(char *st, int m, int n)
{
    int i = 0;
    while ((m + i) < n)
    {
        st[i] = st[i + m];
        i = i + 1;
    }
    st[i] = '\0';
}
int main()
{
    char st[] = "Arpan";
    slice(st, 1, 4); // returns start and end-1
    printf("%s", st);
    return 0;
}