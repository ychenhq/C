#include <stdio.h>

int main()
{
    // This program reads no input. It simply returns the sum of the integers
    // between 1 and 10.

    int sum = 0; // Initialize the sum to 0
    int i; // The loop variable

    for (i = 1; i <= 10; i++) {
        sum = sum + i; // update the sum
    }

    printf("%d\n", sum); // print the sum
}
