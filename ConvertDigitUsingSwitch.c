#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    // Ask for a number
    printf("Please enter a number between 0 to 9: ");
    int digit;
    scanf("%d", &digit);

    // Convert the number to an English word
    switch (digit) {
    case 0:
        printf("Zero\n");
        break;
    case 1:
        printf("One\n");
        break;
    case 2:
        printf("Two\n");
        break;
    case 3:
        printf("Three\n");
        break;
    case 4:
        printf("Four\n");
        break;
    case 5:
        printf("Five\n");
        break;
    case 6:
        printf("Six\n");
        break;
    case 7:
        printf("Seven\n");
        break;
    case 8:
        printf("Eight\n");
        break;
    case 9:
        printf("Nine\n");
        break;
    default:
        printf("Hey, the number is not in the range 0 to 9!\n");
    }
}
