#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Max number of candidates
#define MAX 9

// preferences[i][j] is number of voters who prefer i over j
int preferences[MAX][MAX];

// locked[i][j] means i is locked in over j
bool locked[MAX][MAX];

// Each pair has a winner, loser
typedef struct
{
    int winner;
    int loser;
}
pair;

// Array of candidates
string candidates[MAX];
pair pairs[MAX * (MAX - 1) / 2];

int pair_count;
int candidate_count;

// Function prototypes
bool vote(int rank, string name, int ranks[]);
void record_preferences(int ranks[]);
void add_pairs(void);
void sort_pairs(void);
void lock_pairs(void);
void print_winner(void);
//
int advantage(pair pairs[], int i);

int main(int argc, string argv[])
{
// Check for invalid usage
    if (argc < 2)
    {
        printf("Usage: tideman [candidate ...]\n");
        return 1;
    }

// Populate array of candidates
    candidate_count = argc - 1;
    if (candidate_count > MAX)
    {
        printf("Maximum number of candidates is %i\n", MAX);
        return 2;
    }
    for (int i = 0; i < candidate_count; i++)
    {
        candidates[i] = argv[i + 1];
    }

// Clear graph of locked in pairs
    for (int i = 0; i < candidate_count; i++)
    {
        for (int j = 0; j < candidate_count; j++)
        {
            locked[i][j] = false;
        }
    }
    pair_count = 0;
    int voter_count = get_int("Number of voters: ");

// Query for votes
    for (int i = 0; i < voter_count; i++)
    {
// ranks[i] is voter's ith preference
        int ranks[candidate_count];

// Query for each rank
        for (int j = 0; j < candidate_count; j++)
        {
            string name = get_string("Rank %i: ", j + 1);

            if (!vote(j, name, ranks))
            {
                printf("Invalid vote.\n");
                return 3;
            }
        }
        record_preferences(ranks);
        printf("\n");
    }

    add_pairs();
    sort_pairs();
    lock_pairs();
    print_winner();
    return 0;
}

// Update ranks given a new vote
bool vote(int rank, string name, int ranks[])
{
// checking looped input name with all candidates
// assigment candidates index to ranks[rank index]
    for (int i = 0; i < candidate_count; i++)
    {
        if (!strcmp(name, candidates[i]))
        {
            ranks[rank] = i;
            return true;
        }
    }
    return false;
}
// Update preferences array given one voter's ranks
// update ranks array candidates over others.
void record_preferences(int ranks[])
{
    for (int i = 0; i < candidate_count - 1 ;i++)
    {
        for (int j = 1; j < candidate_count - i; j++)
        {
            preferences[ranks[i]][ranks[j + i]]++;
        }
    }
}

// Record pairs of candidates where one is preferred over the other
// adding pairs and assigning it winner and loser
void add_pairs(void)
{
    pair_count = 0;

    for (int i = 0; i < candidate_count - 1; i++)
    {
         for (int j = 1; j < candidate_count - i; j++ , pair_count++)
         {
            if (preferences[i][j + i] > preferences [j + i][i])
            {
                pairs[pair_count].winner = i;
                pairs[pair_count].loser = j + i;
            }
            else if (preferences[i][j + i] == preferences [j + i][i])
            {
            }
            else {
                pairs[pair_count].winner = j + i;
                pairs[pair_count].loser = i;
            }
         }
    }
}
// additional function - return strength of victory - (winner - loser)
int advantage(pair para[],int i)
    {
    return preferences[para[i].winner][para[i].loser] - preferences[para[i].loser][para[i].winner];
    }
// Sort pairs in decreasing order by strength of victory
void sort_pairs(void)
{
// with custom function
    for (int j = 0; j < pair_count; j++){
        int fixed = advantage(pairs,j);
// compare swap sort algorithm (setting highest number to last index)
        for (int i = 1; i < pair_count; i++)
        {
            if (fixed < advantage(pairs,i))
            {
                fixed = advantage(pairs,i);
                pairs[i - 1] = pairs[i];
            }
        }
    }
}
// Lock pairs into the candidate graph in order, without creating cycles
void lock_pairs(void)
{
    for (int i = 0; i < pair_count - 1; i++)
    {
        locked[pairs[i].winner][pairs[i].loser] = true;
    }
//checking last arrow in the graph
    for (int j = 0; j < pair_count; j++)
    {
        for (int a = 0; a < pair_count; a++)
        {
            if (locked[j][a] == true)
            {
                locked[pairs[pair_count - 1].winner][pairs[pair_count - 1].loser] = true;
            }
        }
    }
}
// Print the winner of the election
void print_winner(void)
{
// create variable stored false_count number
// if locked[j][i] is false than update false_count
    int false_count[pair_count];
    for (int i = 0; i < pair_count; i++)
   {
       for (int j = 0; j < pair_count; j++)
       {
            if (locked[j][i] == false)
            {
               false_count[i]++;
            }
            else
            {
                break;
            }
       }
   }
// checking false_count[a] number
// the highest false_count[a] wins
    for (int a = 0; a < pair_count; a++)
    {
        if (false_count[a] > false_count[a+1])
       {
            false_count[a+1] = false_count[a];
       }
    }
printf("%s\n",candidates[pair_count-1]);
}