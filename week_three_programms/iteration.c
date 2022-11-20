#include <cs50.h>
#include <stdio.h>

void draw(int height);

int main(void){

    int height = get_int("Height: ");
    draw(height);
}

void draw(int height){
 for (int j = 0; j < height; j++){
        for (int i = 0; i <= j; i++){
            printf("*");
        }
        printf("\n");
    }
}