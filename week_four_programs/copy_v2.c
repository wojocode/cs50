#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
    char *s = "hi!";
    char *t = malloc(strlen(s+1));
    strcpy(t,s);
    printf("%s\n",t);
}