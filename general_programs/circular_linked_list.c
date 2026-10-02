#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}node;

node* addFirst(node* last, int element);
void display(node* last);
node* deletion(node* last, int index);

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
    node* Node;
    Node = last->next; //this makes Node the preNode now
    while(Node != last)
    {
        printf("%d ",Node->data);
        Node = Node->next;
    }
    printf("%d\n",Node->data);
}
node* deletion(node* last, int index)
{
    // considering 0th index here, so index will start 0 to n where 0 being the first element

    node* preNode;
    node* curr_Node;
    node* postNode;
    preNode = last->next; 
    curr_Node = preNode->next;
    postNode = curr_Node->next;
    // there will few cases to consider 1. if 0th element gets deleted 2. if last element gets deleted 3. anything in between
    if (index == 0) // if deletion happens to the first node
    {
        last->next = curr_Node;
        free(preNode);
        return last;
    }
    while(index!=0&&curr_Node != last)
    {
        curr_Node = curr_Node->next;
        preNode = preNode->next;
        postNode = postNode->next;
        index--;
    }
    if (curr_Node == last)// if deletion happens to the last node
    {
        preNode->next = postNode;
        free(curr_Node);
        return preNode;
    }
    preNode->next = postNode;
    free(curr_Node);
    return last;
}