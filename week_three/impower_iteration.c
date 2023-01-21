#include <stdio.h>
#include <cs50.h>

int potega(int p, int w);

int main(void)
{

int p = get_int("Podaj podstawe potęgi: ");
int w = get_int("Podaj wykładnik potęgi: ");

int wynik = potega(p,w);
printf("Wynik: %i\n",wynik);

}
int potega(int p, int w)
{
    int wynik = 1;
    while (w > 0)
    {
    wynik = wynik*p;
    w--;
    }
    return wynik;
}