#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

typedef uint8_t BYTE;

int main(int argc, char *argv[])
{
// initialized chunks of memory card
const int BLOCK_SIZE = 512;
// jpges counter
int i = 0;
// create buffer as a array to store chunk
int buffer[BLOCK_SIZE];

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

while (fread(&buffer, 1, 512, inptr) == BLOCK_SIZE)
    {
        if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] == 0xe0 || buffer[3] == 0xe1 || buffer[3] ==0xe2 || buffer[3] ==0xe3 || buffer[3] == 0xe4 || buffer[3] == 0xe5 || buffer[3] == 0xe6 || buffer[3] == 0xe7 || buffer[3] == 0xe8 || buffer[3] == 0xe9 || buffer[3] == 0xea || buffer[3] == 0xeb || buffer[3] == 0xec || buffer[3] == 0xed || buffer[3] == 0xee || buffer[3] == 0xef))
        {
        char *filename = malloc(8);
        sprintf(filename, "%03i.jpg",i);
        FILE *img = fopen(filename,"w");
        fwrite(buffer,1,512,img);
        fclose(img);
        free(filename);
        i++;
        }
        else
        {

        }
    }
}