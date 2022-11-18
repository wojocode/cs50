#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void){
    string names[] = {"Bill","Ron","Harry","Percy","Tom","Fred","George"};

    for (int i = 0; i < 7; i++){
        if (!(strcmp(names[i], "Ryon"))){
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}
