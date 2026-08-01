#include <stdio.h>

void increment(int* ptr);

int main()
{
    int x = 5;
    int* ptr = &x;
    increment(ptr);
    printf("%d\n",x);
    increment(&x);
    printf("%d\n",x);
}
void increment(int* ptr)
{
    *ptr += 5;
}