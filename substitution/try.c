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
}


bool unique_chars(string key){

    for (int fixed = 0 , i = 0; fixed < strlen(key); fixed++){

        for (int d = strlen(key); (i + 1) < d;i++){
            if (strcasecmp(key[fixed], key[i])){
                return 0;
            }
            else {
            }
        }

    }
    return 1;
}