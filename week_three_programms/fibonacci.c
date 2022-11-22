#include <cs50.h>
#include <stdio.h>

int fib(int n);

int main(void)
{
    int f = 3;
    int wynik = fib(f);
    printf("%i\n", wynik);


}
int fib(int n)
{
    if (n == 1 || n == 2)
    {
        return 1;
    }
    return fib(n-1) + fib(n);

}