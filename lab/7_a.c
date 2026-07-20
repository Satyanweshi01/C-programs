// Write a program to increment two numbers by five using call by reference
#include <stdio.h>
//#include <conio.h>
void increment(int *x, int *y);
int main(){
    int a,b;
    //clrscr();
    printf("Enter Number1: ");
    scanf("%d", &a);
    printf("Enter Number2: ");
    scanf("%d", &b);
    int *x = &a;
    int *y = &b;
    increment(x,y);
    printf("Number1 = %d\n",a);
    printf("Number2 = %d\n",b);
    //getch();
    return 0;
}
void increment(int *x, int *y)
{
    *x += 5;
    *y += 5;
}