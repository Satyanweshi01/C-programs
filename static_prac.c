#include <stdio.h>

void counter(void);
int main()
{
    counter();
    counter();
    counter();

    return 0;
}
void counter(void)
{
    static int c = 0;
    // in this case, static help us to retain the value of local variable between function call
    c+=1;
    printf("%d\n",c);
}