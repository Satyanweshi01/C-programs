#include <stdio.h>

struct RGB
{
    int R;
    int G;
    int B;
};

void grayscale(struct RGB* color);
int main()
{
    struct RGB color1 ={
        .R = 200,
        .G = 55, 
        .B = 25
    };
    // grayscale making
    struct RGB * color_ptr = &color1;
    grayscale(color_ptr);
    printf("%d %d %d\n", color_ptr->R, color1.G, color1.B);
    return 0;
}
void grayscale(struct RGB* color)
{
    int avg = (color->R + color->G + color->B) / 3;
    (*color).R = avg;
    color->G = avg;
    (*color).B = avg;
}