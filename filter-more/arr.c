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
    arr[0][-1] = 0;
printf("%i ",arr[0][0]);
}
