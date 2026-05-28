#include <stdio.h>
#include <conio.h>

int main()
{
    int st_ran, end_ran, sum=0, n=0, i;
    clrscr();
    printf("Enter starting range: ");
    scanf("%d",&st_ran);

    printf("Enter ending range: ");
    scanf("%d",&end_ran);

    for (n = st_ran;n <= end_ran; n++)
    {
        sum = 0;
        for(i=1;i<n;i++)
        {
            if (n%i == 0)
            {
                sum = sum+i;
            }
        }
        if (n==sum)
            {
                printf("%d ",n);
            }
    }
    getch();
    return 0;
}