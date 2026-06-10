#include <stdio.h>

int main()
{
    int n = 0;
    // asking for size of the array
    do
    {
        printf("How much data you have: ");
        scanf("%i",&n);
    } while ( n <= 0 );
    
    long int elements[n];
    long int temp;

    // Getting the data from the user
    for(int i = 0; i < n; i++)
    {
        printf("Data%i: ",i+1);
        scanf("%li",&elements[i]);
    }

    // sorting algorithm
    for (int j = 0; j < n-1; j++) //  each pass shrinks the unsorted portion

        for (int k = 0; k < (n-j-1); k++) // -1 to prevent array out of bound. This is because for elements[k+1]
        {
            if (elements[k]>elements[k+1])
            {
                temp = elements[k];
                elements[k] = elements[k+1];
                elements[k+1] = temp;
            }
        }

    
    for (int l = 0 ; l < n ; l++)
    {
        printf("%li ",elements[l]);
    }
    printf("\n");
    return 0;
}
