
#include <cs50.h>
#include <stdio.h>
int main(void)
{
//prototypes
    int calculate_checksum(long card_number,long i);
    int calculate_checksum_second(long card_number,long i)

// prompt for input
    long card_number;
    int cred1;
     int cred2;
      int cred3;
       int cred4;
        int cred5;
         int cred6;
          int cred7;
           int cred8;
            int checksum_1;
            int checksum_2;
            int tens;
            int rest;
    do
    {
     card_number = get_long("enter card number: ");
    }
    while (card_number < 0);


    //checksum 1
    int i = 10;

    cred1 = calculate_checksum(card_number,i*1);
    if (cred1 >=10)
    {
            tens = cred1 / 10;
            rest = cred1 % 10;
            cred1 = tens + rest;
    }

    cred2 = calculate_checksum(card_number,i*100);
    if (cred2 >=10)
    {
            tens = cred2 / 10;
            rest = cred2 % 10;
            cred2 = tens + rest;
    }

    cred3 = calculate_checksum(card_number,i*10000);
    if (cred3 >=10)
    {
            tens = cred3 / 10;
            rest = cred3 % 10;
            cred3 = tens + rest;
    }

    cred4 = calculate_checksum(card_number,i*1000000);
    if (cred4 >=10)
    {
            tens = cred4 / 10;
            rest = cred4 % 10;
            cred4 = tens + rest;
    }

    cred5 = calculate_checksum(card_number,i*100000000);
    if (cred5 >=10)
    {
            tens = cred5 / 10;
            rest = cred5 % 10;
            cred5 = tens + rest;
    }

    cred6 = calculate_checksum(card_number,i*10000000000);
    if (cred6 >=10)
    {
            tens = cred6 / 10;
            rest = cred6 % 10;
            cred6 = tens + rest;
    }

    cred7 = calculate_checksum(card_number,i*1000000000000);
    if (cred7 >=10)
    {
            tens = cred7 / 10;
            rest = cred7 % 10;
            cred7 = tens + rest;
    }

    cred8 = calculate_checksum(card_number,i*100000000000000);
    if (cred8 >=10)
    {
            tens = cred8 / 10;
            rest = cred8 % 10;
            cred8 = tens + rest;
    }

    checksum_1 = cred1 + cred2 + cred3 + cred4 + cred5 + cred6 + cred7 + cred8 ;
    printf("%i", checksum_1);


  //checksum 2
  

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
        return (card_number % (10 * i)) / i;

}
//int zwrot(int sum)
//{
  // return sum ;
//}
//int el(e,prev){
  //  return e + prev;
//}



