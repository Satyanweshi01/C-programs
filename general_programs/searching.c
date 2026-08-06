#include <stdio.h>

void linear_search(int arr[], int length, int key);
void binary_search(int arr[], int length, int key);
void recursive_binary_search(int arr[], int initial, int final, int key);
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
    
    switch (choice)
    {
        case 1: 
            linear_search(arr,length,key);
            break;
        case 2: 
            binary_search(arr,length,key);
            break; 
        case 3:
            recursive_binary_search(arr, 0, length-1, key);
            break;
        case 4:
            return 0;
        default:
            printf("Could not understand you.");
    }
    }
}

void linear_search(int arr[], int length, int key)
{
    for (int j = 0; j<length; j++)
    {
        if (arr[j] == key)
        {
            printf("The element is found at index %d\n",j);
            return;
        }
    }
    printf("The element is not found\n");
}
void binary_search(int arr[], int length, int key)
{
    int initial = 0, final = length-1;
    while (initial <= final)
    {
        int mid = (initial+final)/2;
        if (arr[mid] == key)
        {
            printf("The element is found at index %d\n",mid);
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
    printf("The element is not found\n");
}
void recursive_binary_search(int arr[], int initial, int final, int key)
{
    if(initial > final)
    {
        printf("The element is not found\n");
    }
    int mid = (initial+final)/2;
    if (arr[mid] == key)
    {
        printf("The element is found at index %d\n",mid);
        return;
    }else if (arr[mid] < key)
    {
        recursive_binary_search(arr, mid+1, final, key);
    }
    else if (arr[mid] > key)
    {
        recursive_binary_search(arr, initial, mid-1, key);
    }
}