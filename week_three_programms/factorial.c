#include <cs50.h>
#include <stdio.h>

int factorial(int n);

int main(void)
{

int fac = get_int("Enter factorial: ");
int wynik = factorial(fac);
printf("score: %i\n", wynik);

}
int factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return ;
}