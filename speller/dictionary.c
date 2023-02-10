// Implements a dictionary's functionality

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include "dictionary.h"
#include <strings.h>
#include <string.h>
#include <stdlib.h>
#include <cs50.h>
// second version
#include <math.h>

// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
}
node;
//keep track how many words is in dictionary
long int words;

// TODO: Choose number of buckets in hash table
const unsigned int N = 26;

const unsigned int S = N * LENGTH;

// Hash table
node *table[S];

// Returns true if word is in dictionary, else false
bool check(const char *word)
{
    int index = hash(word);

    node *cursor = table[index];
    while (cursor != NULL)
        {
            if (!strcasecmp(cursor->word, word))
                {
                    return true;
                }
                cursor = cursor->next;
        }
        return false;
}

// Hashes word to a number
unsigned int hash(const char *word)
{
    // TODO: Improve this hash function
    return toupper(word[0]) - 'A';

}

// Loads dictionary into memory, returning true if successful, else false
bool load(const char *dictionary)
{

char word[LENGTH + 1];
// open a dictionary
   FILE *dictionary_ptr = fopen(dictionary, "r");
    if (dictionary_ptr == NULL)
    {
        printf("could not open a dictionary! \n");
        return false;
    }

// read string from a file
    while (fscanf(dictionary_ptr, "%s",word) != EOF)
    {
        words++;
        node *n = malloc(sizeof(node));
        if (n == NULL)
        {
            printf("memory problem\n");
            return 0;
        }
// copy word into node
    strcpy(n->word, word);

// insert node to hash table
    int index= hash(word);
    n->next = table[index]; /* don't lose conection with prevoius node*/
    table[index] = n;
    }
    return true;
}

// Returns number of words in dictionary if loaded, else 0 if not yet loaded
unsigned int size(void)
{
    return words;
}

// Unloads dictionary from memory, returning true if successful, else false
bool unload(void)
{
    node *cursor = NULL;
    node *tmp;

    for (int i = 0; i < S; i++)
    {

            while (cursor != NULL)
            {
            cursor = table[i];
            tmp = cursor;
            cursor= cursor->next;
            free(tmp);
            }

    }
    return true;
}


