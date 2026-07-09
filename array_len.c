#include <stdio.h>

int main(){
int a[] = {10,20,30,40,50};
printf("%d\n",a);
printf("%d\n",&a);
printf("%d\n",&a+1);
printf("%d\n",*(&a+1));
int len = *(&a + 1) - a;
printf("%d\n",len);
return 0;
}
