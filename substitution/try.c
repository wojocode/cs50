#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <strings.h>
#include <stdlib.h>
#include <string.h>

bool unique_chars(string key);
int main(void){
    string text = get_string("string: ");
    if (unique_chars(text)){
        printf("cool\n");
    }
    else {
        return 1;
    }

  string plaintext = get_string("plaintext: ");
    for (int i = 0; i < strlen(plaintext); i++){
        string argv[strlen(plaintext)];
        if (isupper(plaintext[i])){
            int asciiupper = plaintext[i] - 65;

            printf("%s", argv[asciiupper]);

        }
        else {
            int asciiupper = plaintext[i] - 97;
            printf("%s", argv[asciiupper]);
        }
    }



}


bool unique_chars(string key){

    for (int fixed = 0 , i = 1; fixed <= (strlen(key) - 2); fixed++, i = fixed + 1){

        for (int d = strlen(key); i < d;i++){
            while (isupper(key[fixed])){
                key[fixed] = tolower(key[fixed]);
            }
            while (isupper(key[i])) {
                key[i] = tolower(key[i]);
            }
            if (key[fixed] != key[i]){
            }
            else {
                return 0;
            }
        }
    }
    return 1;
}