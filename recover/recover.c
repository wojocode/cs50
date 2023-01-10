#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
// ensure proper usage
 if (argc != 2)
 {
    printf("Usage: ./recover IMAGE\n");
    return 1;
 }
// remember filename
    char *card = argv[2];

//open memory card
FILE *memory_card = fopen(card,"r");
    if (memory_card == NULL)
    {
        printf("Could not open %s.\n",card);
        return 2;
    }


}