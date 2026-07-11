#include <stdio.h>

int main(){

int arr[5] = {10, 20, 30, 40, 50};

int *p = arr;          // Points to the first element
int (*q)[5] = &arr;    // Points to the entire array


printf("%d\n",p[0]);
printf("%d\n",*(p+1));
printf("%d\n",(*q)[2]);
printf("%d\n",(*q)[3]);

p++; // Moves by sizeof(int) 
q++; // Moves by sizeof(arr) = 5 * sizeof(int)
printf("%p\n",p);
printf("%p\n",q);

}