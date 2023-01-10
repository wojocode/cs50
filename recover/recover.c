#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
// ensure proper use
 if (argc != 2)
 {
    printf("Usage: ./recover IMAGE\n");
    return 1;
 }
// remember filename
    char *card = argv[2];

//open memory card
FILE *memory_card = fopen(card,"r");




}