#include <stdio.h>

int main()
{
    FILE *src = fopen("new.txt","a");
    if (src == NULL)
    {
        printf("Null returned");
        return 1;
    }
    fclose(src);

    return 0;
}