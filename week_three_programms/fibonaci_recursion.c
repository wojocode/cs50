#include <stdio.h>
#include <cs50.h>

int fib(int n);
int main(void)
{
    int index = get_int("Enter fibonacci index: ");
    int score = fib(index);
    printf("%i\n", score);
}

int fib(int n)
{
    if (n == 1 || n ==2)
    {
        return 1;
    }
    else
    {
        return fib(n-2) + fib (n-1);
    }

}