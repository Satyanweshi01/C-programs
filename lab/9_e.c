//Write a program to input a string of any length as per user demand

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int length,i;
    printf("The length of sentence: ");
    scanf("%d",&length);
    char *ptr = malloc((length+1)*sizeof(char));
    printf("Enter the string with length of %d: ",length);
    scanf("%s",ptr);
    for(i=0; i<length; i++)
    {
        printf("%c",ptr[i]);
    }
    printf("\n");
    free(ptr);
}