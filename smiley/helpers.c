#include "helpers.h"

void colorize(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            RGBTRIPLE pixel = image[i][j];
            if(pixel.rgbtBlue == 0 && pixel.rgbtGreen == 0 & pixel.rgbtRed == 0)
            {
                
            }
        }
    }
}
