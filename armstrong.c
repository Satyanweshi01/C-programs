#include <stdio.h>

int counter(int n, int num[]);
void arm(int n, int counter, int num[]);
int power(int base, int exponant);
int main()
{   
    int num[10], n,count=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    count = counter(n,num);
    arm(n,count,num);
    return 0;
}
int counter(int n, int num[])   // a function to get the number of digit and putting the digits in the num array
{
    int i,mod,counter=0;
    for (i=0;n!=0;i++)
    {
        mod = n%10;
        num[i] = mod;
        n = n - mod;
        n = n/10;
        counter+=1;
    }
    return counter;
}
void arm(int n, int counter, int num[])
{
    int i,sum=0;
    for(i=0;i<counter;i++)
    {
        sum += power(num[i],counter);   
    }
    if (sum == n)
    {
        printf("This is a Armstrong number");

    }
    else
    {        
        printf("This is a not Armstrong number");
    }
}
int power(int base, int exponant)
{
    int i,result=1;
    for (i=0; i<exponant; i++)
    {
        result*=base;        
    }
    return result;
}