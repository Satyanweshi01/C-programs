#include <stdio.h>

typedef enum
{
    MON,
    TUE,
    WED
}week;

int main()
{
    week today = WED;
    printf("%d",today);
    return 0;
}