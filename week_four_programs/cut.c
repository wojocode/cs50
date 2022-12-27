#include <stdio.h>
#include <cs50.h>

int main(void)
{
    FILE *fl = fopen("filter-less/images/yard.bmp" ,"r");
    char ch;
    while ((ch = fgetc("filter-less/images/yard.bmp") != EOF)
    {
        printf("%c",ch);
    }
}