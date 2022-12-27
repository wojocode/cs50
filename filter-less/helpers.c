#include <stdlib.h>
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

                if (sepiaBlue > RANGE)
                {
                    image[i][j].rgbtBlue = RANGE;
                }
                else
                {
                    image[i][j].rgbtBlue = sepiaBlue;
                }

                if (sepiaRed > RANGE)
                {
                    image[i][j].rgbtRed = RANGE;
                }
                else
                {
                    image[i][j].rgbtRed = sepiaRed;
                }

                if (sepiaGreen > RANGE)
                {
                    image[i][j].rgbtGreen = RANGE;
                }
                else
                {
                    image[i][j].rgbtGreen = sepiaGreen;
                }
        }
    }
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i <= height - 1; i++)
    {
        for (int j = 0; j <= (width - 1) / 2; j++)
        {
        RGBTRIPLE tmp = image[i][(width - 1) - j];
        image[i][(width - 1) - j] = image[i][j];
        image[i][j] = tmp;
        }
    }
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
// copy every pixel to copy array
RGBTRIPLE copy[height][width];

int Blue_avr, Green_avr, Red_avr;

    for (int i = 0; i <= height - 1; i++)
    {
        for (int j = 0; j <= width - 1; j++)
        {
            copy[i][j] = image[i][j];
        }
    }
// creating blur pixel
    for ( int a = 0; a <= height - 1; a++)
    {
        for (int b = 0; b <= width - 1; b++)
        {
            if (a == 0 && b == 0)
            {
                Blue_avr = round((image[a][b].rgbtBlue + image[a][b + 1].rgbtBlue + image[a+1][b].rgbtBlue + image[a+1][b + 1].rgbtBlue) / 4);
                Green_avr = round((image[a][b].rgbtGreen + image[a][b + 1].rgbtGreen + image[a+1][b].rgbtGreen + image[a+1][b + 1].rgbtGreen) / 4);
                Red_avr = round((image[a][b].rgbtRed + image[a][b + 1].rgbtRed + image[a+1][b].rgbtRed + image[a+1][b + 1].rgbtRed) / 4);
            }
            else if (a == 0 && b == width - 1)
            {
                Blue_avr = round((image[a][b].rgbtBlue + image[a][b - 1].rgbtBlue + image[a+1][b].rgbtBlue + image[a+1][b - 1].rgbtBlue) / 4);
                Green_avr = round((image[a][b].rgbtGreen + image[a][b + 1].rgbtGreen + image[a+1][b].rgbtGreen + image[a+1][b + 1].rgbtGreen) / 4);
                Red_avr = round((image[a][b].rgbtRed + image[a][b - 1].rgbtRed + image[a+1][b].rgbtRed + image[a+1][b - 1].rgbtRed) / 4);
            }



        copy[a][b].rgbtBlue = Blue_avr;
        copy[a][b].rgbtGreen = Green_avr;
        copy[a][b].rgbtRed = Red_avr;

        }
    }
}
