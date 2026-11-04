#include <stdio.h>

typedef struct
{
    char *name; // string
    int vote;
}candidate;

int main(void)
{
    candidate candidates[3];

    candidates[0].name = "Raju";
    candidates[0].vote = 10;

    candidates[1].name = "Sham";
    candidates[1].vote = 12;

    candidates[2].name = "Babu bhaiya";
    candidates[2].vote = 20;

    for (int i =0; i < 3; i++)
        printf("%s - %i\n",candidates[i].name,candidates[i].vote);
}