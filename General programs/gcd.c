#include <stdio.h>
#include <conio.h>

int main(){
    int n1,n2,gcd,i;
    clrscr();
    printf("Enter number one:");
    scanf("%d",&n1);

    printf("Enter number two:");
    scanf("%d",&n2);
    
    for (i=1; i<n1; i++)
    {
        if ((n1%i == 0) && (n2%i == 0))
        {
            gcd = i;
        }
    }
    printf("%d",gcd);
    getch();
    return 0;
}