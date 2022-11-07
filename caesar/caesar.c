#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

bool only_digits(string argv);

int main(int argc, string argv[]){


    if (argc == 2 || only_digits(argv[1]))
    {
        return 0;
    }
    else{
    printf("usage: ./caesar key\n");
    return 1;
    }

    // convert string command line argv to int
    int key = atoi(argv[1]);
    // ask for string
    string plaintext = get_string("plaintext: ");
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