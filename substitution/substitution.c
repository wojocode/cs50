#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <strings.h>
#include <string.h>
#include <stdlib.h>

bool only_characters(string key);
bool unique_chars(string key);
int main(int argc, string argv[])
{
//only 2 command line arg
    while (argc == 1 || argc > 2){
        printf("./substitution KEY\n");
        return 1;
    }
// checking cipher lenght
    while (strlen(argv[1]) != 26){
        printf("Key must contain 26 characters.\n");
        return 1;
    }
// checking if key is alphabetical
    if (!(only_characters(argv[1]))){
        printf("Key must contain alphabetic characters \n");
        return 1;
    }
// unique chars check
    if (unique_chars(argv[1])){
    }
    else {
        printf("Key must not contain repeated characters.\n");
        return 1;
    }
// get plaintext
    string plaintext = get_string("plaintext:  ");
    printf("ciphertext: ");
    for (int i = 0; i < strlen(plaintext); i++){

        if (isupper(plaintext[i])){
// matching asciiupper value to array of argv[1]
            int asciiupper = plaintext[i] - 65;
// encript only alphabetical chars
                if (asciiupper >= 0 && asciiupper <= 26){k
                    string substitution = argv[1];
// printing char and covert it to uppercase
                    printf("%c", toupper(substitution[asciiupper]));
                }
                else {
                    printf("%c", plaintext[i]);
                }
        }
        else {
            int asciiupper = plaintext[i] - 97;
            if (asciiupper >= 0 && asciiupper <= 26){
                    string substitution = argv[1];
                    printf("%c", substitution[asciiupper]);
                }
                else{
                    printf("%c", plaintext[i]);
                }
        }
    }
    printf("\n");
}

// checking if key is alphabetical
bool only_characters(string key){
    for (int i = 0 , n = strlen(key); i < n; i++){

        if(isalpha(key[i])){
        }
        else{
            return 0;
        }
    }
    return 1;
}
// only unique character check
bool unique_chars(string key){
// first loop represent fixed char which is compared to all next chars
        for (int fixed = 0 , i = 1; fixed <= (strlen(key) - 2); fixed++, i = fixed + 1){
// second loop choose 1 char up from fixed char and goes to the and
            for (int d = strlen(key); i < d;i++){
// if char is upper convert it to lower
                while (isupper(key[fixed])){
                    key[fixed] = tolower(key[fixed]);
                }
                while (isupper(key[i])) {
                    key[i] = tolower(key[i]);
                }
// checking unique characters
                if (key[fixed] != key[i]){
                }
                else {
                    return 0;
                }
            }
        }
    return 1;
}
