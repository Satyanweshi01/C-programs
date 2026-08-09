#include <stdio.h>

#define INTEGER 32
int main()
{
    
    int n,i,storage[INTEGER],result[INTEGER];
    printf("Enter the decimal number: ");
    scanf("%d",&n);
    // 0 -> 0000
    // 1 -> 0001
    // 2 -> 0011
    // 3 -> 0010
    // 4 -> 0110
    // 5 -> 0111
    // addition of binary representaiton of the given decimal value
    for (i = 0; i < sizeof(n) * 8 - 1; i++) { // sizeof(n) * 8 - 1 = (4*8) - 1
        //printf("%d ", i);
        int bit = (n >> i) & 1;
        storage[i] = bit;
    }
    // gray code conversion
    result[0] = storage[0];
    for (i = 1; )
    {
        
    }
    // printing the array
    for (i = 0; i<INTEGER; i++)
    {
        printf("%d",storage[i]);
    }
    return 0;
}