#include <cs50.h>
#include <stdio.h>

int main(void){

    for (int j = 0; j < 4; j++){
        for (int i = 0; i <= j; i++){
            printf("*");
        }
        printf("\n");
    }
}