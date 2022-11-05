#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

int main(void){

    string text;
    int n;

    do{
        text = get_string("type in text: ");
        n = strlen(text);
    }
    while (!(text[n-1] == '!' || text[n-1] == '?' || text[n-1] == '.'));

    float letters = count_letters(text);
    float words = count_words(text);
    float sentenses = count_sentences(text);

//Coleman-Liau index variables

    float L = (letters/words) * 100;
    float S = (sentenses/words) * 100;

// Coleman-Liau algorithm.

    double index = 0.0588 * L - 0.296 * S - 15.8;
    int grade = round(index);

    if (grade < 1){

        printf("Before Grade 1\n");
   }
   else if (grade >= 16){
        printf("Grade 16+\n");
   }
   else {
    printf("Grade %i\n", grade);
   }

}
//letters counter
int count_letters(string text){

    int letter = 0;

    for (int i = 0, n = strlen(text); i <= n; i++){

        if (isalpha(text[i])){
            letter++;
        }
    }
    return letter;

}
// words counter
int count_words(string text){

    int word = 0;

// word assume
    if (text[0] != '\0' && text[0] != 32){

        for (int i = 0 , n = strlen(text); i <= n; i++){
            if (text[i] == 32){
            word++;
            }
        }
        return word + 1;
    }
    else {
    return 0;
    }
}

// sentences counter
int count_sentences(string text){

    int sentens = 0;

    for (int i = 0 , n = strlen(text); i <= n; i++){

         if (text[i] == 46 || text[i] == 63 || text[i] == 33){
            sentens++;
         }
    }
     return sentens;
}
