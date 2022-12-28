#include "helpers.h"
#include <math.h>
#include <stdlib.h>

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
//setting value 0 to pixel out of image
for (int a = -1; a <= width; a++)
{

    RGBimage[-1][a].rgbtBlue = 0;
    image[-1][a].rgbtRed = 0;
    image[-1][a].rgbtGreen = 0;
    image[height][a].rgbtBlue = 0;
    image[height][a].rgbtRed = 0;
    image[height][a].rgbtGreen = 0;
}
for (int a = -1; a <= width; a++)
{
    image[a][-1].rgbtBlue = 0;
    image[a][-1].rgbtRed = 0;
    image[a][-1].rgbtGreen = 0;
    image[a][width].rgbtBlue = 0;
    image[a][width].rgbtRed = 0;
    image[a][width].rgbtGreen = 0;
}

int GX_red = round(-1*(copy[i-1][j-1].rgbtRed) + 0*(copy[i-1][j].rgbtRed) + 1*(copy[i-1][j+1].rgbtRed) + -2*(copy[i][j-1].rgbtRed) + 0*(copy[i][j].rgbtRed) + 2*(copy[i][j+1].rgbtRed) + -1*(copy[i+1][j-1].rgbtRed) + 0*(copy[i+1][j].rgbtRed) + 1*(copy[i+1][j+1].rgbtRed));
int GX_green = round(-1*(copy[i-1][j-1].rgbtGreen) + 0*(copy[i-1][j].rgbtGreen) + 1*(copy[i-1][j+1].rgbtGreen) + -2*(copy[i][j-1].rgbtGreen) + 0*(copy[i][j].rgbtGreen) + 2*(copy[i][j+1].rgbtGreen) + -1*(copy[i+1][j-1].rgbtGreen) + 0*(copy[i+1][j].rgbtGreen) + 1*(copy[i+1][j+1].rgbtGreen));
int GX_blue = round(-1*(copy[i-1][j-1].rgbtBlue) + 0*(copy[i-1][j].rgbtBlue) + 1*(copy[i-1][j+1].rgbtBlue) + -2*(copy[i][j-1].rgbtBlue) + 0*(copy[i][j].rgbtBlue) + 2*(copy[i][j+1].rgbtBlue) + -1*(copy[i+1][j-1].rgbtBlue) + 0*(copy[i+1][j].rgbtBlue) + 1*(copy[i+1][j+1].rgbtBlue));

int GY_red = round(-1*(copy[i-1][j-1].rgbtRed) + -2*(copy[i-1][j].rgbtRed) + -1*(copy[i-1][j+1].rgbtRed) + 0*(copy[i][j-1].rgbtRed) + 0*(copy[i][j].rgbtRed) + 0*(copy[i][j+1].rgbtRed) + 1*(copy[i+1][j-1].rgbtRed) + 2*(copy[i+1][j].rgbtRed) + 1*(copy[i+1][j+1].rgbtRed));
int GY_green = round(-1*(copy[i-1][j-1].rgbtGreen) + -2*(copy[i-1][j].rgbtGreen) + -1*(copy[i-1][j+1].rgbtGreen) + 0*(copy[i][j-1].rgbtGreen) + 0*(copy[i][j].rgbtGreen) + 0*(copy[i][j+1].rgbtGreen) + 1*(copy[i+1][j-1].rgbtGreen) + 2*(copy[i+1][j].rgbtGreen) + 1*(copy[i+1][j+1].rgbtGreen));
int GY_blue = round(-1*(copy[i-1][j-1].rgbtBlue) + -2*(copy[i-1][j].rgbtBlue) + -1*(copy[i-1][j+1].rgbtBlue) + 0*(copy[i][j-1].rgbtBlue) + 0*(copy[i][j].rgbtBlue) + 0*(copy[i][j+1].rgbtBlue) + 1*(copy[i+1][j-1].rgbtBlue) + 2*(copy[i+1][j].rgbtBlue) + 1*(copy[i+1][j+1].rgbtBlue));

// assign GX's value to copy[][]
// also round it, capped at 255, and allow only positive results
copy[i][j].rgbtRed = round(GX_red^2 + GY_red^2);
copy[i][j].rgbtGreen = round(GX_green^2 + GY_green^2);
copy[i][j].rgbtBlue = round(GX_blue^2 + GY_blue^2);

if (copy[i][j].rgbtRed <= 0)
{
copy[i][j].rgbtRed = 0;
}
if (copy[i][j].rgbtRed > 255)
{
    copy[i][j].rgbtRed = 255;
}

if (copy[i][j].rgbtGreen <= 0)
{
copy[i][j].rgbtGreen = 0;
}
if (copy[i][j].rgbtGreen > 255)
{
    copy[i][j].rgbtGreen = 255;
}

if (copy[i][j].rgbtBlue <= 0)
{
copy[i][j].rgbtBlue = 0;
}
if (copy[i][j].rgbtBlue > 255)
{
    copy[i][j].rgbtBlue = 255;
}


        }
    }

// assigning new pixels to output
    for (int x = 0; x <=height - 1; x++)
    {
        for (int y = 0; y <= width - 1; y++)
        {
            image[x][y].rgbtRed = copy[x][y].rgbtRed;
            image[x][y].rgbtGreen = copy[x][y].rgbtGreen;
            image[x][y].rgbtBlue = copy[x][y].rgbtBlue;
        }
    }

}