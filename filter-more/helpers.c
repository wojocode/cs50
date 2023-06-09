#include "helpers.h"
#include <math.h>
#include <stdlib.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    return;
    //look at filter-less
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    return;
    //look at filter-less
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    return;
    //look at filter-less
}

// Detect edges, Sobel effect
void edges(int height, int width, RGBTRIPLE image[height][width])
{
RGBTRIPLE copy[height][width];
//RGBTRIPLE column[height][width];
RGBTRIPLE row[height][width];
RGBTRIPLE kernel[height][width];

// assigning black pixel for boarders (four sides)
//seting up first side
    for (int q = 0; q < width;q++)
    {
        image[0][q].rgbtRed = 0;
        image[0][q].rgbtGreen = 0;
        image[0][q].rgbtBlue = 0;
    }
// second side
    for (int w = 0; w < height;w++)
    {
        image[w][width-1].rgbtRed = 0;
        image[w][width-1].rgbtGreen = 0;
        image[w][width-1].rgbtBlue = 0;
    }
//third side
for (int e = 0; e < width;e++)
    {
        image[height-1][e].rgbtRed = 0;
        image[height-1][e].rgbtGreen = 0;
        image[height-1][e].rgbtBlue = 0;
    }
//fourth side
for (int r = 0; r < height;r++)
    {
        image[r][0].rgbtRed = 0;
        image[r][0].rgbtGreen = 0;
        image[r][0].rgbtBlue = 0;
    }

//1. make copy for each pixel
    for (int i = 0; i < height ; i++)
    {
    for (int j = 0; j < width; j++)
        {
            copy[i][j] = image[i][j];
        }
    }

// 2. assigning Gx and Gy value for each color for each pixel
for (int a = 1; a < height - 1; a++)
    {
        for (int b = 1; b < width - 1 ; b++)
        {
            int GX_red = -1*(image[a-1][b-1].rgbtRed) + 0*(image[a-1][b].rgbtRed) + 1*(image[a-1][b+1].rgbtRed)
            + (-2*(image[a][b-1].rgbtRed)) + 0*(image[a][b].rgbtRed) + 2*(image[a][b+1].rgbtRed)
            + (-1*(image[a+1][b-1].rgbtRed)) + 0*(image[a+1][b].rgbtRed) + 1*(image[a+1][b+1].rgbtRed);

            int GX_green = -1*(image[a-1][b-1].rgbtGreen) + 0*(image[a-1][b].rgbtGreen) + 1*(image[a-1][b+1].rgbtGreen)
            + (-2*(image[a][b-1].rgbtGreen)) + 0*(image[a][b].rgbtGreen) + 2*(image[a][b+1].rgbtGreen)
            + (-1*(image[a+1][b-1].rgbtGreen)) + 0*(image[a+1][b].rgbtGreen) + 1*(image[a+1][b+1].rgbtGreen);

            int GX_blue = -1*(image[a-1][b-1].rgbtBlue) + 0*(image[a-1][b].rgbtBlue) + 1*(image[a-1][b+1].rgbtBlue)
            + (-2*(image[a][b-1].rgbtBlue)) + 0*(image[a][b].rgbtBlue) + 2*(image[a][b+1].rgbtBlue)
            + (-1*(image[a+1][b-1].rgbtBlue)) + 0*(image[a+1][b].rgbtBlue) + 1*(image[a+1][b+1].rgbtBlue);

            int GY_red = -1*(image[a-1][b-1].rgbtRed) + (-2*(image[a-1][b].rgbtRed)) + (-1*(image[a-1][b+1].rgbtRed))
            + 0*(image[a][b-1].rgbtRed) + 0*(image[a][b].rgbtRed) + 0*(image[a][b+1].rgbtRed)
            + 1*(image[a+1][b-1].rgbtRed) + 2*(image[a+1][b].rgbtRed) + 1*(image[a+1][b+1].rgbtRed);

            int GY_green = -1*(image[a-1][b-1].rgbtGreen) + (-2*(image[a-1][b].rgbtGreen)) + (-1*(image[a-1][b+1].rgbtGreen))
            + 0*(image[a][b-1].rgbtGreen) + 0*(image[a][b].rgbtGreen) + 0*(image[a][b+1].rgbtGreen)
            + 1*(image[a+1][b-1].rgbtGreen) + 2*(image[a+1][b].rgbtGreen) + 1*(image[a+1][b+1].rgbtGreen);

            int GY_blue = -1*(image[a-1][b-1].rgbtBlue) + (-2*(image[a-1][b].rgbtBlue)) + (-1*(image[a-1][b+1].rgbtBlue))
            + 0*(image[a][b-1].rgbtBlue) + 0*(image[a][b].rgbtBlue) + 0*(image[a][b+1].rgbtBlue)
            + 1*(image[a+1][b-1].rgbtBlue) + 2*(image[a+1][b].rgbtBlue) + 1*(image[a+1][b+1].rgbtBlue);


// set min and max values for GX and GY
                if ( GX_red >= 255)
                {
                    GX_red = 255;
                }
                else if (GX_red <= -255)
                {
                    GX_red = -255;
                }
                if (GY_red >= 255)
                {
                GY_red = 255;
                }
                else if (GY_red <= -255)
                {
                    GY_red = -255;
                }


                if (GX_green <= -255)
                {
                    GX_green = -255;
                }
                else if (GX_green >= 255)
                {
                    GX_green = 255;
                }
                if (GY_green >= 255)
                {
                    GY_green = 255;
                }
                else if (GY_green <= -255)
                {
                    GY_green = -255;
                }


                if (GX_blue >= 255)
                {
                    GX_blue = 255;
                }
                else if (GX_blue <= -255)
                {
                    GX_blue = -255;
                }
                if (GY_blue >= 255)
                {
                GY_blue = 255;
                }
                else if (GY_blue <= -255)
                {
                    GY_blue = -255;
                }

//take a sqrt ,round it, capped at 255
                int kernel_blue = round(sqrt(pow(GX_blue,2) + pow(GY_blue,2)));
                 if ( kernel_blue >= 255)
                {
                    kernel_blue = 255;
                }
// assign new values to output pixel
                 copy[a][b].rgbtBlue = kernel_blue;


                int kernel_green = round(sqrt(pow(GX_green,2) + pow(GY_green,2)));
                if ( kernel_green >= 255)
                {
                    kernel_green = 255;
                }
                copy[a][b].rgbtGreen = kernel_green;


                int kernel_red = round(sqrt(pow(GX_red,2) + pow(GY_red,2)));
                if (kernel_red >= 255)
                {
                   kernel_red = 255;
                }
                copy[a][b].rgbtRed = kernel_red;

        }
    }

  //assigning new pixels to output
    for (int x = 1; x < height - 1; x++)
    {
        for (int y = 1; y < width - 1; y++)
   {
         image[x][y] = copy[x][y];

        }
    }
}
