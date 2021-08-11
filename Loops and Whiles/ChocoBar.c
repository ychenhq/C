#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    // Takes the amount of money the user has and then buy as many chocolate
    // bars as possible.

    // Ask for the amount of money
    printf("Please enter the amount of money you have: ");
    int amount;
    scanf("%d", &amount);

    int bigbars = 0, smallbars = 0;

    // While there is enough money to buy at least one small chocolate bar...
    while (amount >= 2) {
        // Buy a big chocolate bar if there is at least $5 left
        if (amount >= 5) {
            bigbars++;
            amount = amount - 5;
        }
        // Buy a small chocolate bar if there is not enough money for a big bar
        else {
            smallbars++;
            amount = amount - 2;
        }
    }

    printf("You can buy %d big chocolate bar(s) and %d small chocolate bar(s).\n",
        bigbars, smallbars);
}
