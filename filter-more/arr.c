#include <stdio.h>

int main(void)
{
    int arr[3][3];
    int q = 1;

    for (int i = 0; i < 3;i++)
    {
        for (int j = 0; j < 3; j++)
        {

            arr[i][j] = q;
            q++;
        }

    }
    int a = 0;
    int b = 0;

    arr[a-1][b]= -3;


    int pixel = arr[a-1][b] + arr[0][0];
printf("%i ",pixel);
}
