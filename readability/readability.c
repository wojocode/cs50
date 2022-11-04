#include <cs50.h>
#include <stdio.h>
#include <ctype.h>

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

    int i = 0;
    int letters = 0;

    
    if (isalpha(text[i])){
        letters++;
    }

    return letters;

}
