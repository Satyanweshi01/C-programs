#include <stdio.h>
#include <conio.h>

int main()
{
    int h = 0, i, j, k;
    clrscr();
    printf("Enter height: ");
    scanf("%d",&h);

    for (i = 1; i<=h; i++)
    {
        for (k = 0; k < h-i; k++)
        {
            printf(" ");
        }
        for (j = 0; j<i*2-1 ; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    getch();
    return 0;    
}