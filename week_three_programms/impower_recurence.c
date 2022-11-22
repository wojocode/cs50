#include <stdio.h>
#include <cs50.h>

long potega(int p, int w);

int main(void)
{

int p = 3;
int w = 3;

int equal= potega(p,w);
printf("%i\n", equal);
}
long potega(int p, int w)
{
    if (w == 0)
    {
        return 1;
    }
    return p*potega(p,(w-1));
}