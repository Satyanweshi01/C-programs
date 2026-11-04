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
        printf("%c",toupper(string[i]));
    }
    printf("\n");
}