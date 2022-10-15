#include <stdio.h>
#include <cs50.h>

float bmi(float h, int w);

int main(void)
{
    float height = get_float("How tall are you ? ");
    int weight = get_int("How much do you weight ? ");
    float BMI = bmi(height,weight);
    printf("Your BMI is: %f\n", BMI);
}

float bmi(float h, int w)
{
    return w / ((h/100)*(h/100));
}