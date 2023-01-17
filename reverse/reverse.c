#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include "wav.h"

int check_format(WAVHEADER header);
int get_block_size(WAVHEADER header);

int main(int argc, char *argv[])
{
const int HEADER_SIZE = 44;
// declaring array to store input header
WAVHEADER header;

// Ensure proper usage
    if (argc != 3)
    {
        printf("usage: ./reverse INPUT OUTPUT\n");
        return 1;
    }

// remember filename
    char *infile = argv[1];
    char *outfile = argv[2];

// open input file for reading
    FILE *inptr = fopen(infile, "r");
    if (inptr == NULL)
    {
        printf("Could not open %s\n", infile);
        return 2;
    }

// Read header into an array
    fread(&header, 1, HEADER_SIZE, inptr);

// Use check_format to ensure WAV format
    int verification = check_format(header);
    if (verification != 1)
    {
        printf("Input is not a WAV file.\n");
        return 3;
    }

// Open output file for writing
    FILE *outptr = fopen(outfile, "w");
    if (outptr == NULL)
    {
        printf("Could not open %s\n",outfile);
        return 4;
    }

// Write header to file
    fwrite(&header, HEADER_SIZE, 1, outptr);

// Use get_block_size to calculate size of block
    int block_size = get_block_size(header);


// Write reversed audio to file
    int audio[header.numChannels];
    printf("channel: %i\n",header.numChannels);
}

int check_format(WAVHEADER header)
{
    if (header.format[0] == 'W' && header.format[1] == 'A' && header.format[2] == 'V' && header.format[3] == 'E')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int get_block_size(WAVHEADER header)
{
    return header.numChannels * (header.bitsPerSample / 8);
}