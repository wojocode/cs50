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


    char cipher = rotate(plaintext[0], key);
    printf("%i\n" ,cipher);

    //for (int i = 0, n = strlen(plaintext); i < n; i++){
        //char c = plaintext[i];
        //tutaj wywołujemy funcje rotate
    //}



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
// rotate plain character
char rotate(char c, int key){
    char uppercipher = 0;
    char lowercipher = 0;
    //while (isalpha(c) && isupper(c)){
          //uppercipher = ((c - 65) % 26) + key;

    uppercipher = ((c - 65) + key) % 26;
    return uppercipher + 65;
    //while (isalpha(c) && islower(c)){
         //return lowercipher + 96 = ((c - 97) % 26) + key;

}