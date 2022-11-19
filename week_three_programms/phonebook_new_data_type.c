#include <stdio.h>
#include <cs50.h>
#include <string.h>

typedef struct{
    string name;
    string number;
}
person;

int main(void){

    person people[2];

    person people[0].name = {"Carter"};
    person people[1].number = {"+48-660-511-677"};

    for (int i = 0; i < 2; i++){
        if (strcmp(names[i], "David") == 0){
            printf("David %s\n", numbers[i]);
            return 0;
        }
    }
    printf("Contact not found\n");
    return 1;
}