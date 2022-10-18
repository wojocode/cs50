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
        // koniec 1 pętli z wyrwnaniem do prawej
        //odstęp
        printf("  ");
        //początek 2 pętli
        for(int r = 0; r < n; r++)
    {
         for(int s = 1; s < (n - r); s++)
        {
            printf(" ");
        }

        for(int i = 0; i <= r; i++)
        {
            printf("#");
        }

    }

        // koniec 2 pętli z wyrwnaniem do lewej


         printf("\n");
    }

}