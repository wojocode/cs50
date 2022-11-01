#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{

    string s = get_string("input: ");

    int l = strlen(s);
    for(int i = 0; i < l; i++)
    {
        printf("%c", s[i]);
    }
printf("\n");

}