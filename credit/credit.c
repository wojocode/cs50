
#include <cs50.h>
#include <stdio.h>
int main(void)
{
//prototypes
    int calculate_checksum(long card_number,long i);
    int calculate_checksum_second(long card_number,long i);

// variables
  long card_number;
  int checksum;
  int checksum_1;
  int checksum_2;
  int tens;
  int rest;
  //visa
  const long THIRTEEN =  4000000000000;
  const long SIXTEEN = 4999999999999999;
  //american express
  const long FIFTEEN = 340000000000000;


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

    if(card_number >= THIRTEEN || card_number <= SIXTEEN){
      printf("VISA\n");
    }
    if(card_number >= FIFTEEN || card_number)



}
else {
  printf("INVALID\n");
}
    //for (long i = 10; i < card_number; i = i * 100)
    //{

            //e = sum;
            //x = prev + prev;
            //sum = calculate_checksum(card_number,i);

            //if ( sum < 5)
            //{
            //sum = sum * 2;
            //}
            //else {
            //sum = sum * 2;
            //int number = sum / 10;
            //int rest = sum % 10;
            //all = number + rest;
            //sum = all;
            //}

            //prev = zwrot(sum);

           // x = e + prev;
    //}
      //  printf("%i",x);

//}
}


//checksum function
    int calculate_checksum(long card_number,long i)
{
        return ((card_number % (10 * i)) / i)*2;

}
 int calculate_checksum_second(long card_number,long i)
{
        return ((card_number % i) / (i/10));

}
//int zwrot(int sum)
//{
  // return sum ;
//}
//int el(e,prev){
  //  return e + prev;
//}



