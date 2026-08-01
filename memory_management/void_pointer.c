#include <stdio.h>

int main()
{
    int x = 5;
    void* generic_ptr = &x;

    printf(
        "generic_ptr = %d\n", *(int*)generic_ptr
    );
    return 0;
}