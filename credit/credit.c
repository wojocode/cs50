
#include <cs50.h>
#include <stdio.h>
int main(void)
{
//prototypes
    int calculate_checksum(long card_number,long i);
// prompt for input
    long card_number;
    int all;
    int small;
    int equal;
    int x;
    do
    {
     card_number = get_long("enter card number: ");
    }
    while (card_number < 0);



    for (long i = 10; i < card_number; i = i * 100)
    {
        int sum = calculate_checksum(card_number,i);


            //if ( sum < 5)
          //{
            //small = sum * 2;

          //}
            //else {
            //sum = sum * 2;
            //int number = sum / 10;
            //int rest = sum % 10;
            //all = number + rest;
            //}
           while(){
                all = all + sum;

           }

    }

        printf("%i", all);
}



//checksum function
    int calculate_checksum(long card_number,long i)
{
        return (card_number % (10 * i)) / i;

        //multiplied_digit = multiplied_digit * 2;

}



