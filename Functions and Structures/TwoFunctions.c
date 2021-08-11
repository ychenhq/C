#include <stdio.h>

int secondfunc(int x)
{
    printf("The value of x in secondfunc() is %d\n", x);
    x = 1;
    printf("The value of x in secondfunc() is %d\n", x);

    return x + 10;
}

int firstfunc(int x)
{
    int answer;

    printf("The value of x in firstfunc() is %d\n", x);
    answer = secondfunc(x + 5) + x;
    printf("The value of x in firstfunc() is %d\n", x);

    return answer;
}

int main()
{
    int result;

    result = firstfunc(10);
    printf("The value returned by firstfunc(10) is %d\n", result);
}
