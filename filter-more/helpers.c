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
const int OUT = -1;
RGBTRIPLE copy[height][width];

copy= malloc(sizeof(RGBTRIPLE) * (height * width));
// 1. make copy for each pixel
    for (int i = 0; i <= height - 1; i++)
    {
        for (int j = 0; j <= width - 1; j++)
        {
            copy[i][j] = image[i][j];
        }
    }
// 2. assigning Gx value for each color for each pixel
for (int a = 0; a <= height - 1 ; a++)
    {
        for (int b = 0; b <= width - 1; b++)
        {
//setting value 0 to pixel out of image
for (int c = 0; c <= width-1; c++)
{
     image[OUT][c].rgbtBlue = 0;
     image[OUT][c].rgbtRed = 0;
     image[OUT][c].rgbtGreen = 0;
     image[height][c].rgbtBlue = 0;
     image[height][c].rgbtRed = 0;
     image[height][c].rgbtGreen = 0;
}
for (int d = 0; d <= width-1; d++)
{
     image[d][OUT].rgbtBlue = 0;
    image[d][OUT].rgbtRed = 0;
     image[d][OUT].rgbtGreen = 0;
    image[d][width].rgbtBlue = 0;
     image[d][width].rgbtRed = 0;
     image[d][width].rgbtGreen = 0;
}

int GX_red = round(-1*(copy[a-1][b-1].rgbtRed) + 0*(copy[a-1][b].rgbtRed) + 1*(copy[a-1][b+1].rgbtRed)
+ (-2*(copy[a][b-1].rgbtRed)) + 0*(copy[a][b].rgbtRed) + 2*(copy[a][b+1].rgbtRed)
+ (-1*(copy[a+1][b-1].rgbtRed)) + 0*(copy[a+1][b].rgbtRed) + 1*(copy[a+1][b+1].rgbtRed));

int GX_green = round(-1*(copy[a-1][b-1].rgbtGreen) + 0*(copy[a-1][b].rgbtGreen) + 1*(copy[a-1][b+1].rgbtGreen)
    + (-2*(copy[a][b-1].rgbtGreen)) + 0*(copy[a][b].rgbtGreen) + 2*(copy[a][b+1].rgbtGreen)
    + (-1*(copy[a+1][b-1].rgbtGreen)) + 0*(copy[a+1][b].rgbtGreen) + 1*(copy[a+1][b+1].rgbtGreen));

int GX_blue = round(-1*(copy[a-1][b-1].rgbtBlue) + 0*(copy[a-1][b].rgbtBlue) + 1*(copy[a-1][b+1].rgbtBlue)
    + (-2*(copy[a][b-1].rgbtBlue)) + 0*(copy[a][b].rgbtBlue) + 2*(copy[a][b+1].rgbtBlue)
    + (-1*(copy[a+1][b-1].rgbtBlue)) + 0*(copy[a+1][b].rgbtBlue) + 1*(copy[a+1][b+1].rgbtBlue));

int GY_red = round(-1*(copy[a-1][b-1].rgbtRed) + (-2*(copy[a-1][b].rgbtRed)) + (-1*(copy[a-1][b+1].rgbtRed))
    + 0*(copy[a][b-1].rgbtRed) + 0*(copy[a][b].rgbtRed) + 0*(copy[a][b+1].rgbtRed)
    + 1*(copy[a+1][b-1].rgbtRed) + 2*(copy[a+1][b].rgbtRed) + 1*(copy[a+1][b+1].rgbtRed));

int GY_green = round(-1*(copy[a-1][b-1].rgbtGreen) + (-2*(copy[a-1][b].rgbtGreen)) + (-1*(copy[a-1][b+1].rgbtGreen))
    + 0*(copy[a][b-1].rgbtGreen) + 0*(copy[a][b].rgbtGreen) + 0*(copy[a][b+1].rgbtGreen)
    + 1*(copy[a+1][b-1].rgbtGreen) + 2*(copy[a+1][b].rgbtGreen) + 1*(copy[a+1][b+1].rgbtGreen));

int GY_blue = round(-1*(copy[a-1][b-1].rgbtBlue) + (-2*(copy[a-1][b].rgbtBlue)) + (-1*(copy[a-1][b+1].rgbtBlue))
    + 0*(copy[a][b-1].rgbtBlue) + 0*(copy[a][b].rgbtBlue) + 0*(copy[a][b+1].rgbtBlue)
    + 1*(copy[a+1][b-1].rgbtBlue) + 2*(copy[a+1][b].rgbtBlue) + 1*(copy[a+1][b+1].rgbtBlue));



//assign GX's value to copy[][]
 //also round it, capped at 255, and allow only positive results
copy[a][b].rgbtRed = round(pow(GX_red,2) + pow(GY_red,2));
copy[a][b].rgbtGreen = round(pow(GX_green,2) + pow(GY_green,2));
copy[a][b].rgbtBlue = round(pow(GX_blue,2) + pow(GY_blue,2));

if (copy[a][b].rgbtRed <= 0)
{
copy[a][b].rgbtRed = 0;
}
if (copy[a][b].rgbtRed > 255)
{
 copy[a][b].rgbtRed = 255;
}

if (copy[a][b].rgbtGreen <= 0)
{
copy[a][b].rgbtGreen = 0;
}
if (copy[a][b].rgbtGreen > 255)
{
copy[a][b].rgbtGreen = 255;
}

if (copy[a][b].rgbtBlue <= 0)
{
copy[a][b].rgbtBlue = 0;
}
if (copy[a][b].rgbtBlue > 255)
{
    copy[a][b].rgbtBlue = 255;
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