
#include <cs50.h>
#include <stdio.h>
int main(void)
{
//prototypes
    int calculate_checksum(long card_number,long i);
    int zwrot(int sum);
// prompt for input
    long card_number;
    int all;
    int small;
    int equal;
    int prev;
    int e;
    int sum;
    do
    {
     card_number = get_long("enter card number: ");
    }
    while (card_number < 0);



    for (long i = 10; i < card_number; i = i * 100)
    {
        prev = prev + sum;
         sum = calculate_checksum(card_number,i);


            if ( sum < 5)
            {
            sum = sum * 2;
            }
            else {
            sum = sum * 2;
            int number = sum / 10;
            int rest = sum % 10;
            all = number + rest;
            sum = all;
            }

            prev = zwrot(sum);

    }
    printf("%i",prev);

}



//checksum function
    int calculate_checksum(long card_number,long i)
{
        return (card_number % (10 * i)) / i;

        //multiplied_digit = multiplied_digit * 2;

}
int zwrot(int sum)
{
   return sum;
}



