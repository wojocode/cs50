#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int count_letters(string text);

int main(void)
{
    string text = get_string("type in text: ");

    printf("%s\n" ,text);

     int letters = count_letters(text);
     printf("letters: %i\n", letters);



}
//letter counter funkction
int count_letters(string text){

    int letters = strlen(text);
    i

    for (int i = 0, n = strlen(s); i <= letters; i++)
    {

        if (isalpha(text[i])){
        letter_count++;
        }
    }
    return letter_count;

}
