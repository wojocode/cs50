#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void){

    string names[] = {"Carter","David"};
    string numbers[] = {"+48-660-511-677", "+48-660-511-678"};

    for (int i = 0; i < 2; i++){
        if (strcmp(names[i], "David") == 0){
            printf("David %s\n", numbers[i]);
            return 0;
        }
    }
    printf("Contact not found\n");
    return 1;
}