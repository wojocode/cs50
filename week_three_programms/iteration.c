#include <cs50.h>
#include <stdio.h>

int main(void){

    int height = get_int("Height: ");
    for (int j = 0; j < height; j++){
        for (int i = 0; i <= j; i++){
            printf("*");
        }
        printf("\n");
    }
}