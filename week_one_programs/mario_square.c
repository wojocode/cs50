#include <stdio.h>
#include <cs50.h>

int main(void)
{
int n;
do
{
    n = get_int("Size: ");
}
while (n < 1);

for (int row = 0; row < n; row++)
{
    for (int col = 0; col < n; col++)
    {
        printf("*");
    }
    printf("\n");
}
}
