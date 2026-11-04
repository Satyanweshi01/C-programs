#include <stdio.h>
#include <string.h>

int main(void)
{
    char text[20];
    printf("Text: ");
    scanf("%s",&text);

    printf("Reverse: ");
    for ( int i = strlen(text) ; i>=0 ; i--)
    {
        printf("%c", text[i]);
    }
    return 0;
}