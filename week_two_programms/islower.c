#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string word = get_string("enter word: ");

    for(int i = 0 , n = strlen(word); i < n; i++)
    {
        if(islower(word[i]))
        {

           printf("%c", toupper(word[i]));
        }
        else{
            printf("%c", word[i]);
        }
    }
    printf("\n");
}