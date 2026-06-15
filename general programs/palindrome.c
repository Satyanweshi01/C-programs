#include <stdio.h>
#include <math.h>

int main()
{
    int store[100];
    long int n;
    long int rev_n;

    do
    {
        printf("Enter a number(upto 100 digit):");
        scanf("%li",&n);
    }while(n<1);
    rev_n = n;
    int counter = 0;
    for (int i =0; rev_n!=0; i++)
    {
        store[i]= rev_n%10;
        rev_n/=10;
        counter++;
    }
    
    int k = pow(10,counter-1);
    for (int j =0; j<counter; j++)
    {
        rev_n += store[j]*k;
        //printf("%d\n",k);
        k/=10;
    }
    if (rev_n==n)
    {
        printf("This is a palindrome number");
    }
    else
    {
        printf("This is not a palindrome number");
    }
    return 0;
}