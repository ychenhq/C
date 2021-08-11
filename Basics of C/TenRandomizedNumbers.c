#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i;

    // Randomize the random numbers
    srand(time(0));

    for (i = 0; i < 10; i++) {
        printf("%d\n", rand());
    }
}
