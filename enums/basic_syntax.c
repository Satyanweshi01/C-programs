#include <stdio.h>

enum week
{
    MON,
    TUE,
    WED
};

int main()
{

    enum week today = TUE;
    printf("%d",today);
    return 0;
}