//Write a program to calculate the sum of a Fibonacci Series in recursive way
#include<stdio.h>
//#include<conio.h>
int fibo_sum(int n,int i, int j);
int main()
{
    int n=0, result;
    //clrscr();
    printf("Number: ");
    scanf("%d",&n);
    result = fibo_sum(n,0,1);
    printf("Result: %d\n",result);
    //getch();
    return 0;
}
int fibo_sum(int n,int i, int j)
{
    if (n <= 0)
        return 0;

    return i+fibo_sum(n-1,j,i+j);
}