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
while(index <= 0);

if (index == 0)
{
    printf("%i,",numb_1);
}
else if (index == 1)
{
    printf("%i,", numb_2);
}
for (int i = 0; i <= index; i++)
    {

    }

}