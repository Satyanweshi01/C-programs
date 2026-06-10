#include <stdio.h>

int main()
{
    int n,s;
    printf("Enter the number of elements and shift: ");
    scanf("%d %d",&n,&s);
    s = s%n;
    int arr[n];
    for ( int i = 0; i<n ; i++)
    {
        scanf("%d",&arr[i]);
    }
    int arr2[n];
    for (int j =0; j<n; j++)
    {
        int new_index = (j+s)%n;
        arr2[new_index] = arr[j];
    }
    for ( int i = 0; i<n ; i++)
    {
        printf("%d ",arr2[i]);
    }

    return 0;
}