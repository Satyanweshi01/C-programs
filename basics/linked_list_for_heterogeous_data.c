#include <stdio.h>
#include <stdlib.h> // for DMA
typedef union any_type
{
    int u_int;
    float u_float;
    char u_char;
} any_type;
typedef struct node
{
    any_type data;
    struct node* next;
}node;

node* append(node* head);

int main()
{
    node* head,last;
    head = NULL;
    last = NULL;

    while(1)
    {
        int choice;
        printf(
            "Type 1 to append"
            "Type 2 to display"
            "Type 3 to exit"
            "Enter the choice: "
        );
        scanf("%d",&choice);


    }
    

    return 0;
}
