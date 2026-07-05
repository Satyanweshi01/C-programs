#include <stdio.h>

int main()
{
    char * s = "Hola";
    printf("%c\n",*s);
    printf("%c\n",*(s+1));
    printf("%c\n",*(s+2));
    printf("%c\n",*(s+3));
    printf("%i",*(s+4));
}