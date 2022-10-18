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
            printf("  ");
            //koniec rysunku 1 piętli z przerwą 
             for(int r = 0; r < n; r++)
    {
        //this loop runs equal to actual row number
        for(int i = 0; i <= r; i++)
        {
            printf("#");
        }
    }

    }
    printf("\n");

}
