#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    // This program shows a smiley the user has selected from a menu

    int smiley;
    do {
        // Ask the user to select a smiley
        printf("Which smiley do you want to see (or select 6 to quit)?\n\n");
        printf("1) Happy\n");
        printf("2) Sad\n");
        printf("3) Winking\n");
        printf("4) Surprised\n");
        printf("5) Tongue Out\n");
        printf("6) Quit the program.\n");
        printf("\nSelect: ");

        // Get the selection
        scanf("%d", &smiley);

        // Print the smiley
        printf("\n");
        switch (smiley) {
        case 1:
            printf(":)");
            break;
        case 2:
            printf(":(");
            break;
        case 3:
            printf(";)");
            break;
        case 4:
            printf(":o");
            break;
        case 5:
            printf(":p");
            break;
        case 6:
            printf("Bye bye!");
            break;
        default:
            printf("What? (@_@)");
        }
        printf("\n\n");
    } while (smiley != 6); // Stop only if the user selects 6
}
