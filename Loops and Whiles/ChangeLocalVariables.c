#include <stdio.h>

void change(int a, int b)
{
    int temp;

    // Swap the value of a and b
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 1, y = 2;

    // Print values before change()
    printf("x = %d, y = %d\n", x, y);

    change(x, y);

    // Print values after change()
    printf("x = %d, y = %d\n", x, y);
}
