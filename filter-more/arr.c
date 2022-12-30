#include <stdio.h>
#include <math.h>
#include <cs50.h>

int main(void)
{
     typedef struct
{
    int name;
    int votes;
}candidate;

candidate cad[3];
candidate copy[3];


cad[0].votes = 2;


copy[0] = cad[0];


printf("%i\n",copy[0].votes);
}
