#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    // This function takes two numbers as input and
    // does something silly and useless.

    // Read two numbers
    printf("Please enter two numbers: ");
    int x, y;
    scanf("%d %d", &x, &y);

    // Do something silly
    int z;
    if (x < y) {
        z = 2 * y;
        printf("%d\n", z);
    }
    else if (x == y) {
        z = 3 * y;
        printf("%d\n", z);
    }
    else
        printf("0\n");
}
