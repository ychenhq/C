#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

// This function calculates the square of the input x
double square(double x)
{
    // Compute the square and return it
    return x * x;
}

int main()
{
    // Ask for a number
    printf("Please enter a number: ");
    double number;
    scanf("%lf", &number);

    // Take a square of the number and print it
    printf("The square of your number is: %g\n", square(number));
}
