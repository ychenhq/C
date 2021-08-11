#include <stdio.h>

int recursivefunc(int x)
{
    int answer;

    printf("The value of x in recursivefunc() is: %d\n", x);
    if (x < 20)
        answer = recursivefunc(x + 5) + x;
    else
        answer = x;
    printf("The value of x in recursivefunc() is: %d\n", x);

    return answer;
}

int main()
{
    int result;

    result = recursivefunc(10);
    printf("The result of running recursivefunc(10) is: %d\n", result);
}
