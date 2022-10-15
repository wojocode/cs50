#include <stdio.h>
#include <cs50.h>

float bmi(int w , float h);

int main(void)
{
    float height = get_float("How tall are you ? ");
    int weight = get_int("How much do you weight ? ");
    float BMI = bmi(height,weight);
    printf("Your BMI is: %.2f\n", BMI);
}

float bmi(int w , float h)
{
    return w / ((h/100)*(h/100));
}