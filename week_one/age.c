#include <cs50.h>
#include <stdio.h>

int main (void){
    int mine = 27;
    int points = get_int("How old are you?\n");
    if (points < mine){
        printf("You are younger than me\n");
        }
    else if (points > mine){
        printf("You are older than me\n");
    }
    else {
        printf("You are as old as me\n");
    }
    }
