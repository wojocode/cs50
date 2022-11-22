#include <cs50.h>
#include <stdio.h>

int factorial(int n);

int main(void)
{



}
int factorial(int n)
{
    if ( n == 0 || n ==1)
    {
        return 1;
    }
    return factorial(n-1)*factorial(n);
}