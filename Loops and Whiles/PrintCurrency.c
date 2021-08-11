#include <stdio.h>

void printcurrency(double amount)
{
    printf("$%9.2f", amount);
}

int main()
{
    // Print the monthly spending with a formatted amount
    // using a function.

    printf("My Monthly Spending\n\n");

    printf("%-20s", "Food");
    printcurrency(70 * 30);
    printf("\n");

    printf("%-20s", "Transportation");
    printcurrency(20 * 25);
    printf("\n");

    printf("%-20s", "Leisure");
    printcurrency(100 * 20);
    printf("\n");

    for (int i = 0; i < 30; i++) {
        printf("=");
    }
    printf("\n");

    printf("%-20s", "Total");
    printcurrency(70 * 30 + 20 * 25 + 100 * 20);
    printf("\n");
}
