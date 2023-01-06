// Modifies the volume of an audio file

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Number of bytes in .wav header
const int HEADER_SIZE = 44;

int main(int argc, char *argv[])
{
    // Check command-line arguments
    if (argc != 4)
    {
        printf("Usage: ./volume input.wav output.wav factor\n");
        return 1;
    }

    // Open files and determine scaling factor
    FILE *input = fopen(argv[1], "r");
    if (input == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }

    FILE *output = fopen(argv[2], "w");
    if (output == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }

    float factor = atof(argv[3]);

    // TODO: Copy header from input file to output file
    //rename types
    typedef uint8_t ONEBYTE;
    typedef int16_t SAMPLESIZE;

    // add array to store a header from infile
    ONEBYTE header[HEADER_SIZE];

    fread(header,HEADER_SIZE, 1 ,input);
    fwrite(header,HEADER_SIZE, 1 ,input);

    // TODO: Read samples from input file and write updated data to output file
    SAMPLESIZE buffer;
    while(fread(&buffer,sizeof(SAMPLESIZE),1,input))
    {
        buffer = buffer * factor;
        fwrite(&buffer,sizeof(SAMPLESIZE),1,output);
    }

    // Close files
    fclose(input);
    fclose(output);
}
