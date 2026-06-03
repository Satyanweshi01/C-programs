#include <stdio.h>
int factorial(int x);
float sum (int x, int n);
int main()
{
    int x, n;
    float seriessum;
    printf("Enter number x:");
    scanf("%d",&x);
    printf("Enter number n:");
    scanf("%d",&n);
    seriessum = sum(x,n);
    printf("%f",seriessum);
    return 0;
    
}
int factorial(int x)
{
    int i, sum = 1;
    for (i=1;i<=x;i++)
    {
        sum *= i;
    }
    return sum;
}
float sum (int x, int n)
{
    int i = 1;
    float sum=0;
    for (i = 1; i<=n ;i++)
    {
        int p = 2*i-1, j;
        float lob=1.0;
        for (j =1 ;j<=p ;j++)
        {
            lob*=x;
        }
        if (i % 2==0)
        {
            sum -= lob/factorial(p);
        }
        else
        {
            sum += lob/factorial(p);
        }
    }
    return sum;
}
