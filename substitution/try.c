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

    for (int fixed = 0; fixed < strlen(key); fixed++){

        for(int i = 0 , d = strlen(key) ; i < d;i++){
            if (key[fixed] != key[i+1]){
            }
            else {
                return 0;
            }
        }

    }
    return 1;
}