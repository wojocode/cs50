#include <stdio.h>
#include <math.h>

int main(void)
{
    int arr[3] = {1,2,3};
    int copy[3];


        for (int j = 0; j < 3; j++)
        {
            copy[j] = arr[j];
        }


        for (int i = 0;i<3;i++)
        {
          printf("%i\n",copy[i]);
        }

        arr[0] = 6;

for (int i = 0;i<3;i++)
        {
          printf("%i\n",copy[i]);
        }

  for (int i = 0;i<3;i++)
        {
          printf("%i",arr[i]);
        }

}
