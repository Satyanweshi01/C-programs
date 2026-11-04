#include <stdio.h>

typedef struct _stack
{
    int array[10];
    int top;
}stack;

void push(stack* ptr, int value);
int pop(stack* ptr);
int main()
{
    stack s;
    s.top = 0;
    
    stack* stack_ptr = &s;
    push(stack_ptr,3);
    push(stack_ptr,2);
    push(stack_ptr,1);
    push(stack_ptr,10);
    int n=s.top;
    for(int i =0; i<n ; i++)
    {
        printf("%d\n",pop(stack_ptr));
    }

    // for(int i = 0; i<n ; i++)
    // {
    //     printf("%d\n",s.array[i]);
    // }
    // return 0;
}
void push(stack* ptr, int value)
{
    ptr->array[ptr->top] = value;
    ptr->top++;
}
int pop(stack* ptr)
{
    int active_frame = ptr->array[ptr->top-1];
    ptr->array[ptr->top-1] = 0;
    ptr->top--;
    return active_frame;

}