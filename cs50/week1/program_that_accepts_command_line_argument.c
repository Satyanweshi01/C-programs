#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char *argv[])
{
    printf("%s\n",argv[0]); // for program name

    if (argc == 2)
    {
        printf("Hello,");
        for (int i = 0, n = strlen(argv[1]) ; i < n ; i++)
            {
                printf("%c",toupper(argv[1][i]));
            }
    }
    else
    {
        printf("Hello, World!");
    }


}