#include <stdio.h>
#include <cs50.h>

int main(void)
{

    string s = "Wojtek";
    char *p = &s[0];
    printf("%p\n", p);
    printf("%p\n", s);

}