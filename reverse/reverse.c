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
WAVHEADER header[HEADER_SIZE];

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
    fread(header, 1, HEADER_SIZE, inptr);

    // Use check_format to ensure WAV format
    // TODO #4

    // Open output file for writing
    // TODO #5

    // Write header to file
    // TODO #6

    // Use get_block_size to calculate size of block
    // TODO #7

    // Write reversed audio to file
    // TODO #8
}

int check_format(WAVHEADER header)
{
    if (header.)
    return 0;
}

int get_block_size(WAVHEADER header)
{
    // TODO #7
    return 0;
}