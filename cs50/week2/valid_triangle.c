#include <stdio.h>

int valid_triangle(int a, int b, int c);

#define TRIANGLE_SIDES 3
int main()
{
    int sides[TRIANGLE_SIDES];

    for (int i = 0; i<TRIANGLE_SIDES; i++)
    {
        printf("Enter the side length%d: ",i+1);
        scanf("%d",&sides[i]);
    }
    if (valid_triangle(sides[0],sides[1],sides[2]))
    {
        printf("This is a valid triangle");
    }
    else
    {
        printf("This is not a valid triangle");
    }
    
}
int valid_triangle(int a, int b, int c)
{
    if (a <= 0 || b <= 0 || c <= 0)
    {
        return false;
    }
    if ((a+b < c) || (b+c < a) || (c+a < b))
    {
        return false;
    }
    return true;
}