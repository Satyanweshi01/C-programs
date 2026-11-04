#include <stdio.h>

int increment(int* a);
int main()
{
    int a=5;
    printf("a = %d\n",a);
    int* ptr = &a;
    increment(ptr);
    printf("a = %d\n",a);
}
int increment(int* a)
{
    *a = *a + 5;
}