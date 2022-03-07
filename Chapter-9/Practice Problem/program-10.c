#include <stdio.h>

typedef struct date
{
    int date;
    int month;
    int year;
    int hour;
    int minutes;
    int seconds;
} date;

void display(date d)
{
    printf("The date is: %d/%d/%d %d:%d:%d\n", d.date, d.month, d.year, d.hour, d.minutes, d.seconds);
}

int dataCmp(date d1, date d2)
{
    //Make decision on the basis of Year comparison
    if (d1.year > d2.year)
    {
        return 1;
    }
    if (d1.year < d2.year)
    {
        return -1;
    }

    //Make decision on the basis of Month comparison
    if (d1.month > d2.month)
    {
        return 1;
    }
    if (d1.month < d2.month)
    {
        return -1;
    }

    //Make decision on the basis of Date comparison
    if (d1.date > d2.date)
    {
        return 1;
    }
    if (d1.date < d2.date)
    {
        return -1;
    }

    if (d1.hour > d2.hour)
    {
        return 1;
    }
    if (d1.hour < d2.hour)
    {
        return -1;
    }

    if (d1.minutes > d2.minutes)
    {
        return 1;
    }
    if (d1.minutes < d2.minutes)
    {
        return -1;
    }

    if (d1.seconds > d2.seconds)
    {
        return 1;
    }
    if (d1.seconds < d2.seconds)
    {
        return -1;
    }
    return 0;
}
int main()
{
    date d1 = {10, 11, 23, 11, 48, 12};
    date d2 = {5, 4, 22, 12, 33, 12};
    display(d1);
    display(d2);

    int a = dataCmp(d1, d2);
    printf("Date Comparison function returns: %d", a);

    return 0;
}