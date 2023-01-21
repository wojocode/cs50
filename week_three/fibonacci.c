#include <cs50.h>
#include <stdio.h>

int fib(int n);

int main(void)
{
    int index = get_int("Enter fibonacci number index: ");
    int score = fib(index);
    printf("%i\n", score);


}
int fib(int n)
{
    if (n == 1 || n == 2)
    {
        return 1;
    }
    return fib(n-2)+ fib(n-1);
}