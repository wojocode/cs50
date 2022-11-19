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

    people[0].name = "David";
    people[0].number = "+48-660-511-677";
    people[1].name = "Wojtek";
    people[1].number = "+48-550-331-330";

    for (int i = 0; i < 2; i++)
    {
        if (strcmp(people[i].name, "David") == 0){
            printf("%s %s\n", people[i].name , people[i].number);
            return 0;
        }
    }
    printf("Contact not found\n");
    return 1;
}