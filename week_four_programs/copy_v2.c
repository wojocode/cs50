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
    t[0] = toupper(t[0]);
    printf("%s\n",s);
    printf("%s\n",t);


    free(t);
}