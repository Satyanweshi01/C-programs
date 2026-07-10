#include <stdio.h>

struct coordinate
{
    int x;
    int y;
    int z;
};

struct coordinate scale(struct coordinate position);

int main()
{
    struct coordinate p1 = {
        .x = 10,
        .y = 10,
        .z = 10
    };
    struct coordinate scaled_p1 = scale(p1);
    
    printf("x = %d\n",scaled_p1.x);
    printf("y = %d\n",scaled_p1.y);
    printf("z = %d\n",scaled_p1.z);


    return 0;
}
struct coordinate scale(struct coordinate position)
{
    struct coordinate scaled = {
        .x = position.x * 10,
        .y = position.y * 20,
        .z = position.z * 30
    };
    return scaled;
}
