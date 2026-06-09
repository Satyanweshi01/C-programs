#include <stdio.h>

int main()
{
    int a;
    a = 60;
    int *ptr;
    ptr = &a;
    int **ptr_ptr;
    ptr_ptr = &ptr;
    printf("Value of %d\n",a);
    printf("Value of %d\n",*ptr);
    printf("Value of %d",**ptr_ptr);
    return 0;
}