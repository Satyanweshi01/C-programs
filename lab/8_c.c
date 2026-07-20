//Write a program to check whether the given word is palindome(e.g - 121) or not
#include <stdio.h>
//#include<conio.h>
void palindome_or_not(int n);
int main()
{
    int n=0;
    //clrscr();
    printf("Number: ");
    scanf("%d",&n);
    palindome_or_not(n);
    //getch();
    return 0;
}
void palindome_or_not(int n)
{
    int temp = n;
    int reverse = 0;
    int rem;
    while (n!=0)
    {
        rem = n%10;
        reverse *= 10;
        reverse += rem;
        n = n/10;
    }
    if (reverse == temp)
    {
        printf("It is a Palindrome Number\n");
    }
    else
    {
        printf("It is not a Palindrome Number\n");
    }
}