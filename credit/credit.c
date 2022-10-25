#include <cs50.h>
#include <stdio.h>

int main(void)
{
//prototypes
    int calculate_checksum(long card_number);

// prompt for input
    long card_number;
    do{
     card_number = get_long("enter card number: ");
    }
    while(card_number <= 0);

    int sum = calculate_checksum(card_number);
    printf("%i\n", sum);
}

//checksum function
    int calculate_checksum(long card_number)
{

        int multiplied_digit = (card_number % 100) / 10;
        multiplied_digit = multiplied_digit * 2;
        return multiplied_digit;
}





