// Write a program to reverse the each word of a given sentence
// hello world
// olleh dlrow
#include <stdio.h>
#include <ctype.h>

void reverse(int* start_index, int end_index, char string[]);
int main()
{
    char string[50];
    int i;
    fgets(string,50,stdin);
    //printf("%s",string);
    int start_index = 0;
    
    for(i=0; string[i] != '\0'; i++)
    {
        if((isblank(string[i]))||string[i]=='\n')
        {
            reverse(&start_index, i-1, string);
        }
        
    }
    printf("\n");
    return 0;
}
void reverse(int* start_index, int end_index, char string[])
{
    int j;
    for(j = end_index; j>=*start_index; j--)
    {
        printf("%c",string[j]);
    }
    printf(" ");
    *start_index = end_index+2;
}