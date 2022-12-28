#include <stdio.h>

int main(void)
{
    int arr[3][3];

    for (int i = 0; i < 3;i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr[i][j]= j+1;
        }
    }
    
}
