#include <stdio.h>
#include <cs50.h>

int numb_1 = 0;
int numb_2 = 1;
int next_numb = 1;
int index;
int sum;

int main(void)
{
do {
    index = get_int("enter index: ");
}
while(index < 0);

if (index == 0)
{
    printf("%i\n",numb_1);
}
else if (index == 1)
{
    printf("%i, %i\n", numb_1,numb_2);
}
else {
for (int i = 0; i <= index; i++)
    {

        printf("%i,",sum);
        next_number = numb_1 + numb_2;
        sum = next_number + sum



    }
    printf("\n");
}
}