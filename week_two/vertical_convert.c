#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string s = "Wojtek";
    for(int i = 0; i < strlen(s); i++)
    {
        printf("%c\n",s[i]);
    }
}