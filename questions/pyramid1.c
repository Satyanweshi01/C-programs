#include <stdio.h>
#include <conio.h>

int main()
{
    int h = 0, i, j;
    clrscr();
    printf("Enter height: ");
    scanf("%d",&h);

    for (i = 1; i<=h; i++)
    {
        for (j = h-i; j<h ; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    getch();
    return 0;
    
}