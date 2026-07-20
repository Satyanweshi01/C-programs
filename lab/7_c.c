//Write a function lin_srch() that accepts one array of integers and an given item to check whether that given item is present or not in that given array.

#include<stdio.h>
//#include<conio.h>

void lin_srch(int arr[], int arr_size, int item);
int main()
{
    int arr_size,i,item;
    int arr[50];
    //clrscr();
    printf("Type size of the array(up to 50): ");
    scanf("%d",&arr_size);
    
    for (i = 0; i<arr_size; i++)
    {
        printf("Enter value for item%d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Type item to search: ");
    scanf("%d",&item);
    lin_srch(arr,arr_size,item);
    //getch();
    return 0;
}
void lin_srch(int arr[], int arr_size, int item)
{
    int i,found=0;
    for (i=0; i<arr_size; i++)
    {
        if (arr[i] == item)
        {
            printf("Found it\n");
            found+=1;
        }
    }
    if (found==0){
    printf("Not present in the array\n");
    }
}