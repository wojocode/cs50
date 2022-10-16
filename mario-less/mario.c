#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //get input from user
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while(n < 1 || n > 8);

    for(int row = 0; row < n; row++)
    {
        for(int col = 0; col < n -1;)
        {
            printf("#");
            printf("\n");
        }
       
        printf("\n");
    }
}
