#include <cs50.h>
#include <stdio.h>

int main(void)
{
//prototypes
    int calculate_checksum_first(long card_number,long i);

// prompt for input
    long card_number;
    int sum;

    do
    {
     card_number = get_long("enter card number: ");
    }
    while (card_number < 0);

    for (long i = 10; i < card_number; i = i * 10)
    {
        sum = calculate_checksum_first(card_number,i);

    }
    printf("%i",sum);
}

//checksum function
    int calculate_checksum_first(long card_number,long i)
{

        int multiplied_digit = card_number % (10 * i);
        multiplied_digit = multiplied_digit * 2;
        return multiplied_digit;
}




