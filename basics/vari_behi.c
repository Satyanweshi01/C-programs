#include <stdio.h>

int main()
{
    int a = 10;
    int b = a; // here value is passed by value
    b++;
    ++b;
    printf("%d\n",a);
    printf("%d\n",b);
}