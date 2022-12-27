#include <stdio.h>
#include <cs50.h>

int numb_1 = 0;
int numb_2 = 1;
int next_numb;
int index;

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
for (int i = 0; i <= index; i++)
    {
        printf("%i,",next_numb);
        next_numb = numb_2 + next_numb;

    }
    printf("\n");
}