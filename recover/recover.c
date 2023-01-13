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
// initiazlized index of jpg's file name
int i = 0;
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
     char *filename = malloc(sizeof(char) * 7 + 1);
// searching for jpg's header
    if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] == 0xe0 || buffer[3] == 0xe1 || buffer[3] ==0xe2 || buffer[3] ==0xe3 || buffer[3] == 0xe4 || buffer[3] == 0xe5 || buffer[3] == 0xe6 || buffer[3] == 0xe7 || buffer[3] == 0xe8 || buffer[3] == 0xe9 || buffer[3] == 0xea || buffer[3] == 0xeb || buffer[3] == 0xec || buffer[3] == 0xed || buffer[3] == 0xee || buffer[3] == 0xef))
    {

        sprintf(filename, "%03i.jpg",i);
        // if start of first JPEG
            if (i == 0)
            {
                FILE *img = fopen(filename,"w");
                fwrite(buffer, 1, BLOCK_SIZE ,img);
                fclose(img);
                i++;
            }
            else
            {
                i++;
                FILE *next = fopen(filename,"w");
                fwrite(buffer, 1, BLOCK_SIZE ,next);
                fclose(next);
            }
    }
    else
    {
        FILE *wyj = fopen(filename,"a");
        fwrite(buffer, 1 , BLOCK_SIZE,wyj);
        fclose(wyj);
    }
}

}