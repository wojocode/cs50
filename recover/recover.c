#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

int main(int argc, char *argv[])
{
// initialized chunks of memory card
const int BLOCK_SIZE = 512;
// initialized BYTE type
typedef uint8_t  BYTE;
// create buffer as a array to store chunk
BYTE buffer[512];

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

while(fread(buffer, sizeof(buffer), 1, inptr))
{
    FILE *img = fopen("1.jpg","a");
    fwrite(buffer,sizeof(buffer),1,img);
}

}