#include "helpers.h"
#include <math.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
// grayscale converter use orginal pixel average of three values and set that average value to all of color type in the pixel (below named new_pixel)
    int new_pixel;

    for (int i = 0; i <= height - 1; i++)
    {
        for (int j = 0; j <= width -1; j++)
        {
            new_pixel = round((image[i][j].rgbtBlue + image[i][j].rgbtGreen + image[i][j].rgbtRed) / 3);
            image[i][j].rgbtBlue = new_pixel;
            image[i][j].rgbtGreen = new_pixel;
            image[i][j].rgbtRed = new_pixel;
        }
    }
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    const int RANGE = 255;
    for (int i = 0; i <= height - 1; i++)
    {
        for (int j = 0; j <= width - 1; j++)
        {
            int sepiaRed = round(.393 * image[i][j].rgbtRed + .769 * image[i][j].rgbtGreen + .189 * image[i][j].rgbtBlue);
            int sepiaGreen = round(.349 * image[i][j].rgbtRed + .686 * image[i][j].rgbtGreen + .168 * image[i][j].rgbtBlue);
            int sepiaBlue = round(.272 * image[i][j].rgbtRed + .534 * image[i][j].rgbtGreen + .131 * image[i][j].rgbtBlue);
            
        }
    }

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
