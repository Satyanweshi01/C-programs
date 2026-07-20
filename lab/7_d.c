//Write a program to create an array of n integers (n will be given at run time) and print the sum of all inputted items of that array

#include<stdio.h>
//#include<conio.h>

int main()
{
    int arr_size,sum=0,i;
    printf("Type size of the array: ");
    scanf("%d",&arr_size);
    int arr[arr_size];
    for (i = 0; i<arr_size; i++)
    {
        printf("Enter value for item%d: ",i+1);
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    
    printf("%d\n",sum);
}
