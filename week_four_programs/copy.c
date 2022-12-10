#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
    char *s = "hi!";
    char *t = malloc(strlen(s) + 1);

    for (int i = 0 , n = strlen(s) + 1; i < n; i++)
    {
        t[i] = s[i];
    }
    t[0] = toupper(t[0]);
    printf("%s\n",s);
    printf("%s\n",t);
}