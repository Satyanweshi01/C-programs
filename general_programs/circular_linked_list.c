#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}node;

node* addFirst(node* last, int element);
void display(node* last);

int main()
{
    node* last = NULL;
    while(1)
    {
        int choice;
        printf(
                "Type 1 to addfirst\n"
                //"Type 2 to append\n"
                "Type 3 to deletion\n"
                "Type 4 to display\n"        
                //"Type 5 to check if the linked list is circular or not\n"
                "Type 6 to exit\n"
        );
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                int element;
                printf("Enter data: ");
                scanf("%d",&element);
                last = addFirst(last, element);
                break;
            case 3:
                int index;
                printf("Enter index to delete: ");
                scanf("%d",&index);
                last = deletion(last, index);
                break;
            case 4:
                display(last);
                break;
            case 6:
                exit(0);
            default:
                printf("Invalid Command");

        }
    }
    return 0;
}
node* addFirst(node* last, int element)
{
    if (last == NULL)//linkedlist is empty
    {
        node* tempNode = (node*) malloc(sizeof(node));
        tempNode->data = element;
        tempNode->next = tempNode;
        return tempNode;
    }
    //if linkedlist is not empty
    node *tempNode = (node*) malloc(sizeof(node)); // getting space for the new node
    tempNode->data = element; // adding element in the data field
    tempNode->next = last->next; //adding last's next in the next field
    last->next = tempNode; // assigning the last's next to the tempNode pointer
    return last; // returning last node pointer
}
void display(node* last)
{
    node* trav;
    trav = last->next; //this makes trav the head now
    while(trav != last)
    {
        printf("%d ",trav->data);
        trav = trav->next;
    }
    printf("%d\n",trav->data);
}
node* deletion(node* last, int index)
{
    // considering oth index here, so index will start 0,
}