#include <stdio.h>

typedef struct _queue
{
    int array[10];
    int front;
    int size;
}queue;
void enqueue(queue* ptr, int value);
int dequeue(queue* ptr);
int main()
{
    queue q;
    q.front = 0;
    q.size = 0;
    
    queue* queue_ptr = &q;
    
    enqueue(queue_ptr,5);
    enqueue(queue_ptr,51);
    dequeue(queue_ptr);
    enqueue(queue_ptr,22);
    enqueue(queue_ptr,81);
    dequeue(queue_ptr);

    int n=q.size;
    for(int i =0; i<n ; i++)
    {
        printf("%d\n",dequeue(queue_ptr));
    }

    // for(int i = 0; i<n ; i++)
    // {
    //     printf("%d\n",q.array[i]);
    // }
    // return 0;
}
void enqueue(queue* ptr, int value)
{
    ptr->array[ptr->size+ptr->front] = value;
    ptr->size++;
}
int dequeue(queue* ptr)
{
    int oldest_element = ptr->array[ptr->front];
    ptr->array[ptr->front] = 0;
    ptr->size--;
    ptr->front++;
    return oldest_element;

}