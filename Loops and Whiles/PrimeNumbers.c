#include <stdio.h>

int main()
{
    // This program finds all prime numbers from 1 to 20
    int divisors;
    int x, i;

    // Loop through the value of x from 1 to 20
    for (x = 1; x <= 20; x++) {
        // Find out how many divisors for the number x
        divisors = 0;
        for (i = 1; i < x; i++) {
            if (x % i == 0) {
                divisors++;
            }
        }

        // The number is a prime number if there is only one divisor
        if (divisors == 1) {
            printf("%2d is a prime number.\n", x);
        }
    }
}
