#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *concat(char *s1,char* s2);
int main()
{
    char * s1,* s2;
    s1 = malloc(sizeof(char)*10);
    if (s1 == NULL)
    {
    printf("Memory allocation failed\n");
    return 1;
    }
    s2 = malloc(sizeof(char)*10);
    if (s2 == NULL)
    {
    printf("Memory allocation failed\n");
    return 1;
    }
    printf("Enter string1(upto 9 char): ");
    scanf("%s", s1);
    printf("Enter string2(upto 9 char): ");
    scanf("%s", s2);
    char *s3 = concat(s1,s2);
    printf("Here the concatenated string: %s",s3);
    free(s1);
    free(s2);
    free(s3);

    return 0;
}
char *concat(char *s1,char* s2)
{
    char* s3;
    int n = strlen(s1),m = strlen(s2);
    s3 = malloc(n+m+2);
    if (s3 == NULL)
        return NULL;
    for(int i = 0; i<n; i++)
        s3[i]=s1[i];
    s3[n]=' ';
    n++;
    for(int i = 0; i<=m; i++) // <= to read the NUL
        s3[n+i]=s2[i];
    return s3;

}
