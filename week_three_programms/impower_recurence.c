#include <stdio.h>
#include <cs50.h>

long potega(int p, int w);

int main(void)
{

int p = 3;
int w = 4;

int equal= potega(w,p);
printf("%i\n", equal);
}
long potega(int p, int w)
{
    if (p == 0)
    {
        return 1;
    }
    return p*potega(w,p-1);
}