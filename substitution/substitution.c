#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])
{
    //only 2 command line arg
    while (argc == 1 || argc > 2){
        printf("./substitution key\n");
        return 1;
    }
    // checking cipher lenght
    while (strlen(argv[1]) != 26){
        printf("Key must contain 26 characters.\n");
        return 1;
    }

}
