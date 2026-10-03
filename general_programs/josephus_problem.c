#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}node;

node* addFirst(node* last, int element);
node* append(node* last, int element);
void display(node* last);
node* josephus_deletion(node* last, int shift);
node* listClear(node* last);
int main()
{
    node* last = NULL;
    while(1)
    {
        int choice;
        printf(
                "Type 1 to addfirst\n"
                "Type 2 to Josephus index\n"
                "Type 3 to append\n"
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
            case 2:
                int shift;
                printf("Enter shift for josephus's problem(1th index): ");
                scanf("%d",&shift);
                last = josephus_deletion(last, shift-1);
                last = listClear(last);
                break;
            case 3:
                printf("Enter data: ");
                scanf("%d",&element);
                last = append(last, element);
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
node* append(node* last, int element)
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
    return tempNode; // returning last node pointer
}
node* listClear(node* last)
{
    node *trav;
    trav = last->next;
    while(trav !=last)
    {
        last->next = trav->next;
        free(trav);
        trav = last->next;
    }
    printf("The list is cleared\n");
    return NULL;
}
void display(node* last)
{
    if (last == NULL)
    {
        printf("The circular linked list is empty\n");
        return;
    }
    node* Node;
    Node = last->next; //this makes Node the preNode now
    while(Node != last)
    {
        printf("%d ",Node->data);
        Node = Node->next;
    }
    printf("%d\n",Node->data);
}
node* josephus_deletion(node* last, int shift)
{
    // considering 0th index here, so index will start 0 to n where 0 being the first element
    if (last == NULL)
    {
        printf("The circular linked list is empty\n");
        return NULL;
    }
    node *preNode, *curr_Node;

    preNode = last; 
    curr_Node = preNode->next; // now head


    while(preNode != curr_Node)// only one node in the circular linked list
    {
        int i;
        for(i = 0; i<shift; i++)
        {   printf("%d %d %d\n",i,preNode->data,curr_Node->data);
            preNode = preNode->next;
            curr_Node = curr_Node->next;
        }
        preNode->next = curr_Node->next;
        if (curr_Node == last)
        {
            last = preNode;
        }
        free(curr_Node);
        curr_Node = preNode->next;
    }
    printf("The last surviving element: ");
    display(last);
    return last;
}