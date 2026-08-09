#include <stdio.h>
#include <stdlib.h>

int linear_search(int arr[], int length, int key);
int binary_search(int arr[], int length, int key);
int recursive_binary_search(int arr[], int initial, int final, int key);
int decision_block(int choice,int arr[],int length,int key);
int main()
{
    while(1)
    {
    int length,key,i,choice;
    printf("\n\nEnter the length of array: ");
    scanf("%d",&length);

    int arr[length];
    for (i=0; i<length; i++)
    {
        printf("Enter element%d: ", i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the key: ");
    scanf("%d",&key);
    printf(
        "Type 1 for linear search\n"
        "Type 2 for binary search\n"
        "Type 3 for binary search with recursion\n"
        "Type 4 for exit\n"
        "Enter your choice: "
        );
    scanf("%d",&choice);
    int result = decision_block(choice,arr,length,key);
    if (result >= 0)
    {
        printf("The element is found at index %d\n",result);
    }
    else
    {
        printf("The element is not found\n");
    }
    }
    return 0;
}
int decision_block(int choice,int arr[],int length,int key)
{
switch (choice)
    {
        case 1: 
            return linear_search(arr,length,key);
            
        case 2: 
            return binary_search(arr,length,key);
        case 3:
            return recursive_binary_search(arr, 0, length-1, key);
        case 4:
            exit(0);
        default:
            printf("Could not understand you.");
    }
}
int linear_search(int arr[], int length, int key)
{
    for (int j = 0; j<length; j++)
    {
        if (arr[j] == key)
        {
            //printf("The element is found at index %d\n",j);
            return j;
        }
    }
    return -1;
    //printf("The element is not found\n");
}
int binary_search(int arr[], int length, int key)
{
    int initial = 0, final = length-1;
    while (initial <= final)
    {
        int mid = (initial+final)/2;
        if (arr[mid] == key)
        {
            //printf("The element is found at index %d\n",mid);
            return mid;
        }
        else if (arr[mid] < key)
        {
            initial = mid+1;
        }
        else if (arr[mid] > key)
        {
            final = mid-1;
        }
    }
    //printf("The element is not found\n");
    return -1;
}
int recursive_binary_search(int arr[], int initial, int final, int key)
{
    if(initial > final)
    {
        //printf("The element is not found\n");
        return -1;
    }
    int mid = (initial+final)/2;
    if (arr[mid] == key)
    {
        //printf("The element is found at index %d\n",mid);
        return mid;
    }else if (arr[mid] < key)
    {
        recursive_binary_search(arr, mid+1, final, key);
    }
    else if (arr[mid] > key)
    {
        recursive_binary_search(arr, initial, mid-1, key);
    }
}