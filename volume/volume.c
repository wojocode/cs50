// Modifies the volume of an audio file

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

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

    for (int i = 0; i < HEADER_SIZE; i++)
    {
        fread(&header[i],sizeof(ONEBYTE),1,input);
    }
    fwrite(header,sizeof(ONEBYTE),HEADER_SIZE,output);

    // TODO: Read samples from input file and write updated data to output file
    SAMPLESIZE buffer;
     size_t fread(&buffer,sizeof(SAMPLESIZE),size_t,input);


    // Close files
    fclose(input);
    fclose(output);
}
