#include <stdio.h>
#include <cs50.h>

int fib(int n);
int main(void)
{
    int index = get_int("Enter fibonacci index: ");
    for (int i = 0; i < index; i++)
    {
        int score = fib(i);
        printf("%i,",score);
    }
}
int fib(int n)
{
    if (n == 1 || n ==2)
    {
        return 1;
    }
    else if (n == 0)
    {
        return 0;
    }
    else
    {
        return fib(n-2) + fib (n-1);
    }
}