#include <stdio.h>
#include <stdlib.h>

int factorial(int n);
int main(int argc , char *argv[])
{
    if (argc != 2)
{
    printf("The file needs a command line argument");
    return 1;
}
    int n = atoi(argv[1]);
    printf("%i",factorial(n));
    return 0;
}
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n*factorial(n-1);
}