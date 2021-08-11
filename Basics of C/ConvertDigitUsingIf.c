#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    // Ask for a number
    printf("Please enter a number between 0 to 9: ");
    int digit;
    scanf("%d", &digit);

    // Convert the number to an English word
    if (digit == 0) {
        printf("Zero\n");
    }
    else if (digit == 1) {
        printf("One\n");
    }
    else if (digit == 2) {
        printf("Two\n");
    }
    else if (digit == 3) {
        printf("Three\n");
    }
    else if (digit == 4) {
        printf("Four\n");
    }
    else if (digit == 5) {
        printf("Five\n");
    }
    else if (digit == 6) {
        printf("Six\n");
    }
    else if (digit == 7) {
        printf("Seven\n");
    }
    else if (digit == 8) {
        printf("Eight\n");
    }
    else if (digit == 9) {
        printf("Nine\n");
    }
    else {
        printf("Hey, the number is not in the range 0 to 9!\n");
    }
}
