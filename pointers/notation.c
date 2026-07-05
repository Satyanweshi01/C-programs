// pointer notation

#include <stdio.h>

int main()
{
    int n = 40;
    int *p = &n;

    printf("Value of the n: %d\n" , *p);
    printf("Address of the n: %p ", p);

    return 0;
}