#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char string[10];
    printf("Before: ");
    scanf("%s",&string);

    printf("After: ");

    for (int i = 0, n = strlen(string); i < n ; i++)
    {
        //if string element is lowercase
        //if (string[i] >= 'a' && string[i] <= 'z')
        if (islower(string[i]))
        {
            printf("%c",toupper(string[i])); // since characters are ascii we can do this
        }
        else
        {
            printf("%c",string[i]);
        }
    }
    printf("\n");
}