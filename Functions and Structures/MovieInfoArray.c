#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i;

    struct movieinfo {
        char title[50];
        int year;
    };

    // Create a variable to store the information of the six Starwars movies
    struct movieinfo starwars[6];

    strcpy(starwars[0].title, "Star Wars Episode IV: A New Hope");
    starwars[0].year = 1977;
    strcpy(starwars[1].title, "Star Wars Episode V: The Empire Strikes Back");
    starwars[1].year = 1980;
    strcpy(starwars[2].title, "Star Wars Episode VI: Return of the Jedi");
    starwars[2].year = 1983;
    strcpy(starwars[3].title, "Star Wars Episode I: The Phantom Menace");
    starwars[3].year = 1999;
    strcpy(starwars[4].title, "Star Wars Episode II: Attack of the Clones");
    starwars[4].year = 2002;
    strcpy(starwars[5].title, "Star Wars Episode III: Revenge of the Sith");
    starwars[5].year = 2005;

    for (i = 0; i < 6; i++) {
        printf("%s (%d)\n", starwars[i].title, starwars[i].year);
    }
}
