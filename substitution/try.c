#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

bool unique_chars(string key);
int main(void){
    string text = get_string("string: ");
    if (unique_chars(text)){
        printf("cool\n");
    }
    else {
        return 1;
    }
}


bool unique_chars(string key){
    int i = 0;
    for (int fixed = 0; fixed < strlen(key); fixed++){

        for(i = 0; i < strlen(key);i++){
            if (key[fixed] != key[i]){
            }
            else {
                return 0;
            }
        }

    }
    return 1;
}