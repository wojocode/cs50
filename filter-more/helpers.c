#include "helpers.h"

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}

// Detect edges
void edges(int height, int width, RGBTRIPLE image[height][width])
{
RGBTRIPLE copy[height][width];
// 1. make copy for each pixel
    for (int i = 0; i <= height - 1; i++)
    {
        for (int j = 0; j <= width - 1; j++)
        {
            copy[i][j] = image[i][j];
        }
    }

// 2. assigning Gx value for each color for each pixel
for (int i = 0; i <= height - 1 ; i++)
    {
        for (int j = 0; j <= width - 1; j++)
        {
// condicions for pixels in the corners
//1
if (i = 0)
{
image[]
}
            int GX_red =
            int GX_green =
            int Gx_blue =

            int GY_red =
            int GY_green =
            int GY_bliue =
        }
    }
}
