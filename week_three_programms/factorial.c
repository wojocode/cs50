#include <cs50.h>
#include <stdio.h>

int fac(int n);

int main(void)
{

int fact = get_int("Enter factorial: ");
int wynik = fac(fact);
printf("score: %i\n", wynik);

}
int fac(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n*(fac(n-1));
}