#include <cs50.h>
#include <stdio.h>

int main(void)
{
//prototypes
    int calculate_checksum_first(long card_number,long i);
    int calculate(int sum);

// prompt for input
    long card_number;
    int sum;
    do
    {
     card_number = get_long("enter card number: ");
    }
    while (card_number < 0);

    for (long i = 10; i < card_number; i = i * 100)
    {
        sum = calculate_checksum_first(card_number,i);

        if(sum >= 10){
           int split_digit = calculate(sum);
           sum = sum + split_digit;
        }
        else {
        sum = sum + sum;
        }
    }
    printf("%i", sum);


}

//checksum function
    int calculate_checksum_first(long card_number,long i)
{

        int multiplied_digit = (card_number % (10 * i)) / i;
        multiplied_digit = multiplied_digit * 2;
        return multiplied_digit;
}

int calculate(int sum)
{
    int all = (sum % 10);
    return all;
}



