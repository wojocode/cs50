#include <stdio.h>
#include <cs50.h>

void discount(float regular);

int main(void)
{
    discount(void);
}
    void discount(float regular)
    {
    float regular = get_float("Regular Price: ");
    float sale = regular * .85;
    printf("Sale Price: %.2f\n", sale);
    }