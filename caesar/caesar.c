#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

bool only_digits(string argv);
char rotate(char c, int key);

int main(int argc, string argv[]){

//only digits one cl arg
    while (argc == 1 || argc > 2){
        printf("Usage: ./caesar key\n");
        return 1;
    }
    while(!(only_digits(argv[1]))){
        printf("Usage: ./caesar key\n");
        return 1;
    }
//convert string command line argv to int
    int key = atoi(argv[1]);
//prompt the user for plaintext
    string plaintext = get_string("plaintext: ");

// loop for getting char by char from plaintext
    for (int i = 0, n = strlen(plaintext); i < n; i++){
        char c = plaintext[i];
        //tutaj wywołujemy funcje rotate
        if (isalpha(c) && isupper(c)){

        }





    }



}


// checking wheather argv contains digits
bool only_digits(string argv){
    for (int i = 0, n = strlen(argv); i < n; i++){
        if (isdigit(argv[i])){
        }
        else{
            return 0;
        }
    }
    return 1;

}
char rotate(char c, int key){
    while ((isalpha(c) && isupper(c))){
         = (c - 65 + key) % 26;
    }


    while ((isalpha(c) && islower(c))){
        return (c - 97 + key) % 26;
    }
}