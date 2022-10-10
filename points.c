#include <cs50.h>
#include <stdio.h>

int main (void){
    int mine = 2;
    int points = get_int("How many points did you lose?\n");
    if (points < mine){
        printf("You lose fewer points than me\n");
        }
    else if (points > mine){
        printf("You lose more points than me\n");
    }
    else {
        printf("You lose the same points as me\n");
    }
    }
