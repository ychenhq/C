#include <stdio.h>

int main()
{
    float hours_of_sleep_per_day = 7.5f;

    printf("An average person needs %f hours of sleep each day.\n",
        hours_of_sleep_per_day);
    printf("An average person needs %f hours of sleep each year.\n",
        hours_of_sleep_per_day * 365);
    printf("An average person needs to sleep %f days in a year.\n",
        hours_of_sleep_per_day * 365 / 24);
}
