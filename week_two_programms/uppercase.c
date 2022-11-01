#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{

    string word = get_string("type sth here: ");

    for(int i = 0, n = strlen(word); i < n; i++)
    {
        if(word[i] >= 'a' && word[i] <= 'z')
        {
            printf("%c", word[i] - 32);
        }
        else{
            printf("%c",word[i]);
        }
    }
    printf("\n");

}