#include <stdio.h>
// glorified number wrapper

typedef enum Colors
{
    RED = 55,
    GREEN = 154,
    BLUE = 85
}color_enum;

int main()
{
    enum Colors r = RED;
    enum Colors g = GREEN;
    enum Colors b = BLUE;
    int avg = (r+g+b)/3;
    printf("RED = %d GREEN = %d BLUE = %d\nAVG: %d\n",r,g,b,avg);
}