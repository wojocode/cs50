#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(int argc, char *argv[])
{
// initialized chunks of memory card
const int BLOCK_SIZE = 512;
// initialized BYTE type
typedef uint8_t  BYTE;
// create buffer as a array to store chunk
BYTE buffer[512];

// ensure proper usage
 if (argc != 2)
 {
    printf("Usage: ./recover IMAGE\n");
    return 1;
 }
// remember filename
    char *card = argv[1];

//open memory card
FILE *inptr = fopen(card,"r");
    if (inptr == NULL)
    {
        printf("Could not open %s.\n",card);
        return 2;
    }
// reading from disc image until reach the end of the file
while (fread(buffer, 1, BLOCK_SIZE, inptr))
{
// searching for jpg's header
    if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xf0) == 0xe0 && buffer[3] == 0xe0)
        {
            //create a file name
            char *filename = malloc(sizeof(char) * 7 + 1);
            FILE *img = fopen(filename,)
        }

//create jpg's file and allocate them memory


}



}