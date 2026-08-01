#include <stdio.h>
#include <stdlib.h>

int main()
{
    char* s = malloc(100);
    printf("Enter your name:");
    scanf("%s",s);

    printf("First character: %c\n",*s);
    printf("First character: %c\n",s[0]);

    printf("Hello %s\n",&*s);
    printf("Hello %s\n",s);

    free(s);
    return 0;
}