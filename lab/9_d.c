//Write a program to make an abbreviation of a string like Bipin chandra pal -> B.p.pal
#include <stdio.h>
#include <ctype.h>

void abbr(int* start_index, int end_index, char string[]);
int main()
{
    char string[50];
    int i;
    fgets(string,50,stdin);
    //printf("%s",string);
    int start_index = 0;
    
    for(i=0; string[i] != '\0'; i++)
    {
        if((isblank(string[i])))
        {
            abbr(&start_index, i-1, string);
        }
    }
    for(i=start_index; string[i] != '\0'; i++)
    {
        printf("%c",string[i]);
    }
    printf("\n");
    return 0;
}
void abbr(int* start_index, int end_index, char string[])
{
    printf("%c.",string[*start_index]);
    *start_index = end_index+2;
}