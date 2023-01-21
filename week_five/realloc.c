#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *number = malloc(sizeof(int) * 3);
    number[0] = 1;
    number[1] = 2;
    number[2] = 3;

    int *next = realloc(number, 4 * sizeof(int));
    next[3] = 4;

    next = number;

    for (int i = 0; i < 4; i++)
    {
        printf("%i\n",next[i]);
    }
}