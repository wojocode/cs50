#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

bool only_characters(string key);
int main(int argc, string argv[])
{
//only 2 command line arg
    while (argc == 1 || argc > 2){
        printf("./substitution key\n");
        return 1;
    }
// checking cipher lenght
    while (strlen(argv[1]) != 4){
        printf("Key must contain 26 characters.\n");
        return 1;
    }
// checking if key is alphabetical
    

}




// checking if key is alphabetical
bool only_characters(string key){
    for (int i = 0 , n = strlen(key); i <= n; i++){
        if(isalpha(key[i]) && (key[i] != key[i+1]) && (key[i] != key[i-1])){
        }
        else{
            return 0;
        }
    }
    return 1;
}