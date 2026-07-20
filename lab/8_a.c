//Write a program to find the Factorial of a given number in recursive way
#include<stdio.h>
int factorial(int n);
int main()
{ 
    int n=0, result;
    printf("Number: ");
    scanf("%d",&n);
    result = factorial(n);
    printf("Result: %d\n",result);

}
int factorial(int n)
{
    if (n==1)
    {
        return 1;
    }
    return n*factorial(n-1);
}