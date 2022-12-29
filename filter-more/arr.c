#include <stdio.h>
#include <math.h>

int main(void)
{
    int arr[3] = {1,2,3};
    int copy[3];


        for (int j = 0; j < 3; j++)
        {
            int *p = &arr[j];
            copy[j] = *p;
        }
        printf("%p\n %p",&copy[0],&arr[0]);

        for (int i = 0;i<3;i++)
        {
          printf("%i\n%i\n",copy[i],arr[i]);
        }
        arr[0] = 8;

         for (int i = 0;i<3;i++)
        {
          printf("\n%i\n%i\n",copy[i],arr[i]);
        }
}
