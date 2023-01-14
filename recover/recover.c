#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

typedef uint8_t BYTE;

int main(int argc, char *argv[])
{
// initialized chunks of memory card
const int BLOCK_SIZE = 512;
// initialized BYTE type

// create buffer as a array to store chunk
BYTE buffer[BLOCK_SIZE];

if (argc != 2)
 {
    printf("Usage: ./recover IMAGE\n");
    return 1;
 }
// remember filename
    char *infile = argv[1];

//open memory card
FILE *inptr = fopen(infile,"r");
    if (inptr == NULL)
    {
        printf("Could not open %s.\n",infile);
        return 2;
    }

fread(buffer, sizeof(buffer), 1, inptr);

    FILE *img = fopen("1.jpg","w");
     if (img == NULL)
    {
        printf("Could not open %s.\n",infile);
        return 3;
    }
    fwrite(buffer,sizeof(buffer),1,img);



}