
#include <cs50.h>
#include <stdio.h>
int main(void)
{
  //prototypes
  int calculate_checksum(long card_number,long i);
  int calculate_checksum_second(long card_number,long i);
  //variables
  long card_number;
  int checksum;
  int checksum_1;
  int checksum_2;
  int tens;
  int rest;
  //visa
  const long THIRTEEN =  4000000000000;
  const long THOURTEEN= 4999999999999;
  const long SIXTEEN_MIN = 4000000000000000;
  const long SIXTEEN_MAX = 4999999999999999;
  //american express
  const long AMERICAN_FIFTEEN_MIN = 340000000000000;
  const long AMERICAN_FIFTEEN_MAX = 349999999999999;
  const long AMERICAN_FIFTEEN_MIN_OR= 370000000000000;
  const long AMERICAN_FIFTEEN_MAX_OR= 379999999999999;
  //mastercard
  const long MSIXTEEN_LOW = 5100000000000000;
  const long MSIXTEEN_MAX = 5599999999999999;

// prompt for input

    do
    {
     card_number = get_long("enter card number: ");
    }
    while (card_number < 0);

    //checksum 1
    int i = 10;

    int cred1 = calculate_checksum(card_number,i*1);
    if (cred1 >=10)
    {
            tens = cred1 / 10;
            rest = cred1 % 10;
            cred1 = tens + rest;
    }

    int cred2 = calculate_checksum(card_number,i*100);
    if (cred2 >=10)
    {
            tens = cred2 / 10;
            rest = cred2 % 10;
            cred2 = tens + rest;
    }

    int cred3 = calculate_checksum(card_number,i*10000);
    if (cred3 >=10)
    {
            tens = cred3 / 10;
            rest = cred3 % 10;
            cred3 = tens + rest;
    }

    int cred4 = calculate_checksum(card_number,i*1000000);
    if (cred4 >=10)
    {
            tens = cred4 / 10;
            rest = cred4 % 10;
            cred4 = tens + rest;
    }

    int cred5 = calculate_checksum(card_number,i*100000000);
    if (cred5 >=10)
    {
            tens = cred5 / 10;
            rest = cred5 % 10;
            cred5 = tens + rest;
    }

    int cred6 = calculate_checksum(card_number,i*10000000000);
    if (cred6 >=10)
    {
            tens = cred6 / 10;
            rest = cred6 % 10;
            cred6 = tens + rest;
    }

    int cred7 = calculate_checksum(card_number,i*1000000000000);
    if (cred7 >=10)
    {
            tens = cred7 / 10;
            rest = cred7 % 10;
            cred7 = tens + rest;
    }

    int cred8 = calculate_checksum(card_number,i*100000000000000);
    if (cred8 >=10)
    {
            tens = cred8 / 10;
            rest = cred8 % 10;
            cred8 = tens + rest;
    }

checksum_1 = cred1 + cred2 + cred3 + cred4 + cred5 + cred6 + cred7 + cred8 ;

  //checksum 2

  int scred1 = calculate_checksum_second(card_number,i);

  int scred2 = calculate_checksum_second(card_number,i*100);

  int scred3 = calculate_checksum_second(card_number,i*10000);

  int scred4 = calculate_checksum_second(card_number,i*1000000);

  int scred5 = calculate_checksum_second(card_number,i*100000000);

  int scred6 = calculate_checksum_second(card_number,i*10000000000);

  int scred7 = calculate_checksum_second(card_number,i*1000000000000);

  int scred8 = calculate_checksum_second(card_number,i*100000000000000);

checksum_2 =scred1 + scred2 + scred3 + scred4 + scred5 + scred6 + scred7 + scred8 ;

checksum = checksum_1 + checksum_2;

// cheksum valid condiciton

if ( checksum % 10 == 0){

    //AMEX
    if((card_number >= AMERICAN_FIFTEEN_MIN && card_number <= AMERICAN_FIFTEEN_MAX) || (card_number >= AMERICAN_FIFTEEN_MIN_OR && card_number <= AMERICAN_FIFTEEN_MAX_OR)){
      printf("AMEX\n");
    }
    //MASTERCARD
    else if(card_number >= MSIXTEEN_LOW && card_number <= MSIXTEEN_MAX){
      printf("MASTERCARD\n");
    }
    //VISA
    else if((card_number >= THIRTEEN && card_number <= THOURTEEN) || (card_number >= SIXTEEN_MIN && card_number <= SIXTEEN_MAX)){
      printf("VISA\n");
    }

    else{
      printf("INVALID\n");
    }
}
    else {
    printf("INVALID\n");
    }

}

//checksum functions
    int calculate_checksum(long card_number,long i)
{
        return ((card_number % (10 * i)) / i)*2;
}
 int calculate_checksum_second(long card_number,long i)
{
        return ((card_number % i) / (i/10));
}




