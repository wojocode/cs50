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

    for ( )

}

//checksum function
    int calculate_checksum(long card_number)
{
        
        int multiplied_digit = (card_number % (10*I)) / I;
        multiplied_digit = multiplied_digit * 2;
        return multiplied_digit;
}





