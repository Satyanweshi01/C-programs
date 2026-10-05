#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int queue[5],front=-1,rear=-1;

void enqueue(int element);
void dequeue(int element);
void display(void);
void peek(void);

int main(void)
{
    int c;
    printf(
            "Enter 1 to enqueue"
            "Enter 2 to dequeue"
            "Enter 3 to display"
            "Enter 4 to peek"
            "Enter 5 to exit"
            "Enter the choice: "
        );
    scanf("%d",&c);
    switch(c)
    {
        case 1:
            int v;
            printf("Enter data: ");
            scanf("%d",&v);
            enqueue(v);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            peek();
            break;
        case 5:
            exit(0);
        default: printf("Invalid Command");       
    }
    return 0;
}
void enqueue(int element)
{
    
}
void dequeue(int element)
{
    
    
}
void display(void)
void peek(void)