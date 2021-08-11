#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    // Ask for an input number
    printf("Please enter a number: ");

    // Read the input number into a variable
    int x;
    scanf("%d", &x);

    // Test the size of the number
    if (x >= 100) {
        printf("You have entered a number bigger than or equal to 100.\n");
        printf("Wow, that is a big number!\n");
    }
    else {
        printf("You have entered a number smaller than 100.\n");
        printf("Oops! That is a small number.\n");
    }
}
