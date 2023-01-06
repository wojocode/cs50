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
    for (int i = 0; i < height ; i++)
    {
        for (int j = 0; j < width; j++)
        {
            copy[i][j] = image[i][j];
        }
    }
// 2. assigning Gx and Gy value for each color for each pixel
for (int a = 1; a <= height - 2; a++)
    {
        for (int b = 1; b <= width - 2 ; b++)
        {

int GX_red = round(-1*(image[a-1][b-1].rgbtRed) + 0*(image[a-1][b].rgbtRed) + 1*(image[a-1][b+1].rgbtRed)
+ (-2*(image[a][b-1].rgbtRed)) + 0*(image[a][b].rgbtRed) + 2*(image[a][b+1].rgbtRed)
+ (-1*(image[a+1][b-1].rgbtRed)) + 0*(image[a+1][b].rgbtRed) + 1*(image[a+1][b+1].rgbtRed));

int GX_green = round(-1*(image[a-1][b-1].rgbtGreen) + 0*(image[a-1][b].rgbtGreen) + 1*(image[a-1][b+1].rgbtGreen)
    + (-2*(image[a][b-1].rgbtGreen)) + 0*(image[a][b].rgbtGreen) + 2*(image[a][b+1].rgbtGreen)
    + (-1*(image[a+1][b-1].rgbtGreen)) + 0*(image[a+1][b].rgbtGreen) + 1*(image[a+1][b+1].rgbtGreen));

int  GX_blue = round(-1*(image[a-1][b-1].rgbtBlue) + 0*(image[a-1][b].rgbtBlue) + 1*(image[a-1][b+1].rgbtBlue)
    + (-2*(image[a][b-1].rgbtBlue)) + 0*(image[a][b].rgbtBlue) + 2*(image[a][b+1].rgbtBlue)
    + (-1*(image[a+1][b-1].rgbtBlue)) + 0*(image[a+1][b].rgbtBlue) + 1*(image[a+1][b+1].rgbtBlue));

int  GY_red = round(-1*(image[a-1][b-1].rgbtRed) + (-2*(image[a-1][b].rgbtRed)) + (-1*(image[a-1][b+1].rgbtRed))
    + 0*(image[a][b-1].rgbtRed) + 0*(image[a][b].rgbtRed) + 0*(image[a][b+1].rgbtRed)
    + 1*(image[a+1][b-1].rgbtRed) + 2*(image[a+1][b].rgbtRed) + 1*(image[a+1][b+1].rgbtRed));

int GY_green = round(-1*(image[a-1][b-1].rgbtGreen) + (-2*(image[a-1][b].rgbtGreen)) + (-1*(image[a-1][b+1].rgbtGreen))
    + 0*(image[a][b-1].rgbtGreen) + 0*(image[a][b].rgbtGreen) + 0*(image[a][b+1].rgbtGreen)
    + 1*(image[a+1][b-1].rgbtGreen) + 2*(image[a+1][b].rgbtGreen) + 1*(image[a+1][b+1].rgbtGreen));

int GY_blue = round(-1*(image[a-1][b-1].rgbtBlue) + (-2*(image[a-1][b].rgbtBlue)) + (-1*(image[a-1][b+1].rgbtBlue))
    + 0*(image[a][b-1].rgbtBlue) + 0*(image[a][b].rgbtBlue) + 0*(image[a][b+1].rgbtBlue)
    + 1*(image[a+1][b-1].rgbtBlue) + 2*(image[a+1][b].rgbtBlue) + 1*(image[a+1][b+1].rgbtBlue));

if (GX_red <= 0)
{
 GX_red = 0;
}
else if ( GX_red > 255)
{
 GX_red = 255;
}

if (GX_green <= 0)
{
 GX_green = 0;
}
else if ( GX_green > 255)
{
 GX_green = 255;
}

if (GX_blue <= 0)
{
 GX_blue = 0;
}
else if ( GX_blue > 255)
{
 GX_blue = 255;
}


if (GY_red <= 0)
{
 GY_red = 0;
}
else if ( GX_red > 255)
{
 GY_red = 255;
}

if (GY_green <= 0)
{
 GY_green = 0;
}
else if ( GY_green > 255)
{
 GY_green = 255;
}

if (GY_blue <= 0)
{
 GY_blue = 0;
}
else if ( GY_blue > 255)
{
 GY_blue = 255;
}
 //also round it, capped at 255, and allow only positive results
 long int kernel_Red = round(pow(GX_red,2) + pow(GY_red,2));
if (kernel_Red <= 0)
{
 kernel_Red = 0;
}

else if ( kernel_Red > 255)
{
 kernel_Red = 255;
}
    copy[a][b].rgbtRed = kernel_Red;


long int kernel_Green= round(pow(GX_green,2) + pow(GY_green,2));
if (kernel_Green <= 0)
{
kernel_Green = 0;
}
else if (kernel_Green > 255)
{
kernel_Green = 255;
}
    copy[a][b].rgbtGreen = kernel_Green;


long int kernel_Blue= round(pow(GX_blue,2) + pow(GY_blue,2));
if ( kernel_Blue <= 0)
{
kernel_Blue = 0;
}
else if (kernel_Blue > 255)
{
    kernel_Blue = 255;
}
    copy[a][b].rgbtBlue = kernel_Blue;



        }
    }


 // assigning new pixels to output
    for (int x = 1; x <=height - 2; x++)
    {
        for (int y = 1; y <= width - 2; y++)
     {
            image[x][y].rgbtRed = copy[x][y].rgbtRed;
            image[x][y].rgbtBlue = copy[x][y].rgbtBlue;
            image[x][y].rgbtGreen = copy[x][y].rgbtGreen;
        }
    }

}