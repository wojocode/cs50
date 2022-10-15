#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float regular = get_float("Regular Price: ");
    int procent_off = get_int("Procent Off: ");
    float sale = discount(regular,procent_off);
    printf("Sale Price: %.2f\n", sale);
}

