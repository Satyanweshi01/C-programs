#include <stdio.h>

int main()
{
    int arr[] = {1,2,3};
    printf("Address of arr: %p\n",arr);
    printf("%d\n",arr[0]);
    printf("%d\n",*arr);
    printf("%d\n",*(arr+1));
    
    return 0;
}