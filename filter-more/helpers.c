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
RGBTRIPLE column[height][width];
RGBTRIPLE row[height][width];
RGBTRIPLE kernel[height][width];

//seting up first edge
    for (int q = 0; q < width;q++)
    {
        image[0][q].rgbtRed = 0;
        image[0][q].rgbtGreen = 0;
        image[0][q].rgbtBlue = 0;
    }
// second edge
    for (int w = 0; w < height;w++)
    {
        image[w][width-1].rgbtRed = 0;
        image[w][width-1].rgbtGreen = 0;
        image[w][width-1].rgbtBlue = 0;
    }
//third edge
for (int e = 0; e < width;e++)
    {
        image[height-1][e].rgbtRed = 0;
        image[height-1][e].rgbtGreen = 0;
        image[height-1][e].rgbtBlue = 0;
    }
//fourth edge
for (int r = 0; r < height;r++)
    {
        image[r][0].rgbtRed = 0;
        image[r][0].rgbtGreen = 0;
        image[r][0].rgbtBlue = 0;
    }



// 1. make copy for each pixel
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
            int GX_red = -1*(copy[a-1][b-1].rgbtRed) + 0*(copy[a-1][b].rgbtRed) + 1*(copy[a-1][b+1].rgbtRed)
            + (-2*(copy[a][b-1].rgbtRed)) + 0*(copy[a][b].rgbtRed) + 2*(copy[a][b+1].rgbtRed)
            + (-1*(copy[a+1][b-1].rgbtRed)) + 0*(copy[a+1][b].rgbtRed) + 1*(copy[a+1][b+1].rgbtRed);

            int GX_green = -1*(copy[a-1][b-1].rgbtGreen) + 0*(copy[a-1][b].rgbtGreen) + 1*(copy[a-1][b+1].rgbtGreen)
            + (-2*(copy[a][b-1].rgbtGreen)) + 0*(copy[a][b].rgbtGreen) + 2*(copy[a][b+1].rgbtGreen)
            + (-1*(copy[a+1][b-1].rgbtGreen)) + 0*(copy[a+1][b].rgbtGreen) + 1*(copy[a+1][b+1].rgbtGreen);

           int GX_blue = -1*(copy[a-1][b-1].rgbtBlue) + 0*(copy[a-1][b].rgbtBlue) + 1*(copy[a-1][b+1].rgbtBlue)
            + (-2*(copy[a][b-1].rgbtBlue)) + 0*(copy[a][b].rgbtBlue) + 2*(copy[a][b+1].rgbtBlue)
            + (-1*(copy[a+1][b-1].rgbtBlue)) + 0*(copy[a+1][b].rgbtBlue) + 1*(copy[a+1][b+1].rgbtBlue);

            int GY_red = -1*(copy[a-1][b-1].rgbtRed) + (-2*(copy[a-1][b].rgbtRed)) + (-1*(copy[a-1][b+1].rgbtRed))
            + 0*(copy[a][b-1].rgbtRed) + 0*(copy[a][b].rgbtRed) + 0*(copy[a][b+1].rgbtRed)
            + 1*(copy[a+1][b-1].rgbtRed) + 2*(copy[a+1][b].rgbtRed) + 1*(copy[a+1][b+1].rgbtRed);

            int GY_green = -1*(copy[a-1][b-1].rgbtGreen) + (-2*(copy[a-1][b].rgbtGreen)) + (-1*(copy[a-1][b+1].rgbtGreen))
            + 0*(copy[a][b-1].rgbtGreen) + 0*(copy[a][b].rgbtGreen) + 0*(copy[a][b+1].rgbtGreen)
            + 1*(copy[a+1][b-1].rgbtGreen) + 2*(copy[a+1][b].rgbtGreen) + 1*(copy[a+1][b+1].rgbtGreen);

            int GY_blue = -1*(copy[a-1][b-1].rgbtBlue) + (-2*(copy[a-1][b].rgbtBlue)) + (-1*(copy[a-1][b+1].rgbtBlue))
            + 0*(copy[a][b-1].rgbtBlue) + 0*(copy[a][b].rgbtBlue) + 0*(copy[a][b+1].rgbtBlue)
            + 1*(copy[a+1][b-1].rgbtBlue) + 2*(copy[a+1][b].rgbtBlue) + 1*(copy[a+1][b+1].rgbtBlue);

                //if (row[a][b].rgbtRed <= 0)
                //{
               // row[a][b].rgbtRed = 0;
                //}
                //else if ( row[a][b].rgbtRed > 255)
               // {
                //row[a][b].rgbtRed = 255;
                //}
                //if (column[a][b].rgbtRed <= 0)
                //{
                //column[a][b].rgbtRed = 0;
                //}
               // else if (column[a][b].rgbtRed > 255)
               // {
               // column[a][b].rgbtRed = 255;
              //  }


                if (row[a][b].rgbtGreen <= 0)
                {
                row[a][b].rgbtGreen = 0;
                }
                else if (row[a][b].rgbtGreen > 255)
                {
                row[a][b].rgbtGreen = 255;
                }
                if (column[a][b].rgbtGreen <= 0)
                {
                column[a][b].rgbtGreen = 0;
                }
                else if (column[a][b].rgbtGreen > 255)
                {
                column[a][b].rgbtGreen = 255;
                }

                if (row[a][b].rgbtBlue <= 0)
                {
                row[a][b].rgbtBlue = 0;
                }
                else if (row[a][b].rgbtBlue > 255)
                {
                row[a][b].rgbtBlue = 255;
                }
                if (column[a][b].rgbtBlue <= 0)
                {
                column[a][b].rgbtBlue = 0;
                }
                else if (column[a][b].rgbtBlue > 255)
                {
                column[a][b].rgbtBlue = 255;
                }



 //also round it, capped at 255, and allow only positive results
                kernel[a][b].rgbtBlue = round(pow(column[a][b].rgbtBlue,2) + pow(row[a][b].rgbtBlue,2));
                if (kernel[a][b].rgbtBlue <= 0)
                {
                kernel[a][b].rgbtBlue = 0;
                }

                else if ( kernel[a][b].rgbtBlue > 255)
                {
                kernel[a][b].rgbtBlue = 255;
                }
                    copy[a][b].rgbtRed = kernel[a][b].rgbtBlue;


                kernel[a][b].rgbtGreen= round(pow(column[a][b].rgbtGreen,2) + pow(row[a][b].rgbtGreen,2));
                if (kernel[a][b].rgbtGreen <= 0)
                {
                kernel[a][b].rgbtGreen = 0;
                }
                else if (kernel[a][b].rgbtGreen > 255)
                {
                kernel[a][b].rgbtGreen = 255;
                }
                    copy[a][b].rgbtGreen = kernel[a][b].rgbtGreen;


                kernel[a][b].rgbtBlue= round(pow(column[a][b].rgbtBlue,2) + pow(row[a][b].rgbtBlue,2));
                if ( kernel[a][b].rgbtBlue <= 0)
                {
                kernel[a][b].rgbtBlue = 0;
                }
                else if (kernel[a][b].rgbtBlue > 255)
                {
                    kernel[a][b].rgbtBlue = 255;
                }

                copy[a][b].rgbtBlue = kernel[a][b].rgbtBlue;

        }
    }

 // assigning new pixels to output
    //for (int x = 1; x <=height - 2; x++)
    //{
    //    for (int y = 1; y <= width - 2; y++)
   //  {
    //        image[x][y].rgbtRed = copy[x][y].rgbtRed;
    //        image[x][y].rgbtBlue = copy[x][y].rgbtBlue;
      //      image[x][y].rgbtGreen = copy[x][y].rgbtGreen;
       // }
    }

