#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef uint8_t BYTE;

int main(int argc, char *argv[])
{
// initialized unit in of memory chunk
const int BLOCK_SIZE = 512;
// file counter
int i = 0;
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

while (fread(buffer, 1, BLOCK_SIZE, inptr))
    {
            if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xe0)== 0xe0 && buffer[3] == 0xe0)
            {
                if (i == 0)
                {
                    char *filename = malloc(sizeof(char) * 7 + 1);
                    sprintf(filename, "%03i.jpg", i);
                    FILE *img = fopen(filename, "w");
                    fwrite(buffer, 1, BLOCK_SIZE, img);
                    fclose(img);
                    free(filename);
                    i++;
                }
                else
                {
                    char *filename = malloc(sizeof(char) * 7 + 1);
                    sprintf(filename, "%03i.jpg", i);
                    FILE *img = fopen(filename, "w");
                    fwrite(buffer, 1, BLOCK_SIZE, img);
                    fclose(img);
                    free(filename);
                    i++;
                }
            }
            // exclude metadata
            else if (i == 0)
            {
            }
            else
            {
                char *filename = malloc(sizeof(char) * 7 + 1);
                sprintf(filename, "%03i.jpg", i-1);
                FILE *img_loading = fopen(filename, "a");
                fwrite(buffer, 1, BLOCK_SIZE, img_loading);
                fclose(img_loading);
                free(filename);
            }
    }

}