#include <stdio.h>
 //deklaracja, ze program będzie korzystał z tej funkcji//
void meow(int n);
 //głwny program, wykorzystujący z funkcją meow//
int main(void){
    meow(3);
}
//działanie funkcji meow//
void meow(int n)
{
    for(int i = 0; i < 3; i++)
    {
        printf("meow\n");
    }
}




