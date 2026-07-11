#include <stdio.h>

int main()
{
    int x = 5;
    int* ptr = &x;
    int** ptr_ptr = &ptr;

    printf(
        "Value of the x = %d\n", x 
    );
    printf(
        "Value of the x(*ptr) = %d\n", *ptr 
    );
    printf(
        "Value of the x(**ptr_ptr) = %d\n", **ptr_ptr 
    );
    printf(
        "Address of the x(&x) = %d\n", &x 
    );
    printf(
        "Address of the x(ptr) = %d\n", ptr 
    );
    printf(
        "Address of the x(*ptr_ptr) = %d\n", *ptr_ptr 
    );
    printf(
        "Address of the ptr(&ptr) = %d\n", &ptr 
    );
    printf(
        "Address of the ptr(ptr_ptr) = %d\n", ptr_ptr 
    );
    
    


}