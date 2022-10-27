
#include <cs50.h>
#include <stdio.h>
int main(void)
{
//prototypes
    int calculate_checksum(long card_number,long i);
    int zwrot(int sum);
    int el(int e, int prev);
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
    do
    {
     card_number = get_long("enter card number: ");
    }
    while (card_number < 0);

    int i = 10;

    cred1 = calculate_checksum(card_number,i*1);

    cred2 = calculate_checksum(card_number,i*100);

    cred3 = calculate_checksum(card_number,i*10000);

    cred4 = calculate_checksum(card_number,i*1000000);

    cred5 = calculate_checksum(card_number,i*100000000);

    cred6 = calculate_checksum(card_number,i*10000000000);

    cred7 = calculate_checksum(card_number,i*1000000000000);

    cred8 = calculate_checksum(card_number,i*100000000000000);



    checksum_1 = cred1 + cred2 + cred3 + cred4 + cred5 + cred6 + cred7 + cred8 ;
    printf("%i", checksum_1);

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
//int zwrot(int sum)
//{
  // return sum ;
//}
//int el(e,prev){
  //  return e + prev;
//}



