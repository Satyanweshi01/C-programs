//Write a program to count the number of words in a given sentence
#include <ctype.h>
#include <stdio.h>


int main()
{
    char string[50];
    int words = 1, i;
    printf("Enter a sentence(upto 50 characters): ");
    fgets(string, 50, stdin);
    //printf("%d",words);
    //printf("%s",string);
    for (i = 0; i<50; i++)
    {
        //printf("%c",i);
        if (isblank(string[i]))
        {
            words++;
        }
    }
    printf("%d\n",words);
    return 0;
}