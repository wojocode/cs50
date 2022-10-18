#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while(n < 1 || n > 8);

    for (int row = 0; row < n; row++)
    {
        for(int space = 0; space <= (8 - row); space++)
        printf(" ");

        for(int i = 0; i <=row; i++)
        {
            printf("#");
        }
         printf("\n");
    }

}