#include <stdio.h>
#include <cs50.h>

int main(void)
{
    float regular = get_float("Regular Price: ");
    float sale = discount(regular);
    printf("Sale Price: %.2f\n", sale);
}
float discount()