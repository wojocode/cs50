#include <stdio.h>
#include <stdlib.h>

//implement node square
typedef struct node
{
    int number;
    struct node *next;
}
node;

int main(int argc, char *argv[])
{
// pointer represent start of a list
    node *list = NULL;
    for (int i = 1; i < argc; i++)
    {
        int number = atoi(argv[i]);

        node *n = malloc(sizeof(node));
        if (n == NULL)
        {
            return 1;
        }
        n->number = number;
        n->next = NULL;
        
    }

}