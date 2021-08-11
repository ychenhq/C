#include <stdio.h>

int main()
{
    char   name_initial = 'D';
    int    weight_in_lb = 200;
    double lb_to_kg = 0.45359237;
    double weight_in_kg = weight_in_lb * lb_to_kg;
    int    height_in_cm = 170;
    float  height_in_m = height_in_cm / 100.0;
    double bmi = weight_in_kg / (height_in_m * height_in_m);

    printf("Hello! I am %c.\n", name_initial);
    printf("\n");
    printf("My weight (kg) is: %f\n", weight_in_kg);
    printf("My height (cm) is: %d\n", height_in_cm);
    printf("My BMI is: %f\n", bmi);
}
