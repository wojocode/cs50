#include <stdio.h>
#include <cs50.h>
float discount(float price, int procent);
int main(void)
{
    float regular = get_float("Regular Price: ");
    float procent_off = get_int("Procent 0ff: ");
    float sale = discount(regular,procent_off);
    printf("Sale Price: %.2f\n", sale);
}
float discount(float price, int procent)
{
    return price * (100 - procent) / 100;
}
