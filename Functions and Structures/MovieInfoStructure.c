#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    struct movieinfo {
        char title[50];
        int year;
        char language;
    };
    struct movieinfo hobbit;

    // Put the title in the structure
    strcpy(hobbit.title, "The Hobbit - An Unexpected Journey");

    // Set the year to the value 2012
    hobbit.year = 2012;

    // Set the language to 'E', representing English in the example
    hobbit.language = 'E';
}
