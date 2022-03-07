#include <stdio.h>
struct bankAccount
{
    int accountNumber;
    char name[10];
    int amount;
    int year;
};

int main()
{
    struct bankAccount a, b, c, d;

    printf("Enter account number: ");
    scanf("%d", &a.accountNumber);
    printf("Enter name: ");
    scanf("%s", &b.name);
    printf("Enter amount: ");
    scanf("%d", &c.amount);
    printf("Enter year: ");
    scanf("%d", &d.year);

    printf("%d\n", a.accountNumber);
    printf("%s\n", b.name);
    printf("%d\n", c.amount);
    printf("%d", d.year);

    return 0;
}