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
        // pętla do robienia odstępow
        for(int space = 1; space < (n - row); space++)
        {
            printf(" ");
        }
        for(int i = 0; i <=row; i++)
        {
            printf("#");
        }
         printf("\n");
    }

}