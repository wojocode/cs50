#include <cs50.h>
#include <stdio.h>

void draw(int n);

int main(void){

    int height = get_int("Height: ");
    draw(height);
}

void draw(int n)
{
// make this funktion finite
    if (n <= 0){
        return;
    }
    draw(n-1);
// after calling draw function itself this funkction make last time for loops
   for (int i = 0; i < n; i++){
        printf("#");
    }
    printf("\n");
}