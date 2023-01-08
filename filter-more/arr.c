#include <stdio.h>
#include <math.h>
#include <cs50.h>
#include <stdint.h>

typedef uint8_t  BYTE;
typedef uint32_t DWORD;
typedef int32_t  LONG;
typedef uint16_t WORD;
typedef struct
{
    BYTE  rgbtBlue;
    BYTE  rgbtGreen;
    BYTE  rgbtRed;
} __attribute__((__packed__))
RGBTRIPLE;


int main(void)
{
RGBTRIPLE image[2][2];

image[0][0].rgbtRed = 255;
image[0][0].rgbtGreen = 255;
image[0][0].rgbtBlue = 255;

image[0][1].rgbtRed = 200;
image[0][1].rgbtGreen = 200;
image[0][1].rgbtBlue = 200;

image[1][0].rgbtRed = 255;
image[1][0].rgbtGreen = 255;
image[1][0].rgbtBlue = 255;

image[1][1].rgbtRed = 255;
image[1][1].rgbtGreen = 255;
image[1][1].rgbtBlue = 255;

for (int i=0; i < 2;i++)
{
    for (int j=0; j <2;j++)
    {
        int GX_red = image[i][j].rgbtRed + -1*image[i][j+1].rgbtRed;
    }

}


printf("%i\n",GX_red);
}
