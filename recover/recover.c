#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
const int BLOCK_SIZE = 512;

// ensure proper usage
 if (argc != 2)
 {
    printf("Usage: ./recover IMAGE\n");
    return 1;
 }
// remember filename
    char *card = argv[1];

//open memory card
FILE *memory_card = fopen(card,"r");
    if (memory_card == NULL)
    {
        printf("Could not open %s.\n",card);
        return 2;
    }


}