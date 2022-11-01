#include <stdio.h>
#include <cs50.h>

int string_lenght(string s);

int main(void){

    string name = get_string("Name: ");

    int lenght = string_lenght(name);
    printf("%i\n", lenght);
}

int string_lenght(string name){
    int i = 0;
    while(name[i] !='\0')
    {
        i++;
    }
    return i;
}