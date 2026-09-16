#include <stdio.h>

//stack implementation using linked list
typedef struct stack
{
	int data;
	struct stack *next;
}s;

s* push(s* top);
s* pop(s* top);
void display(s* top);

int main(void)
{
	// A+B-(C-D) ==> 
	
}
s* push(s* top)
{
	s* temp = (s*)malloc(sizeof(s));
	printf("Enter data: ");
	scanf("%d",&temp->data);
	temp->next = top;
	display(temp);
	return temp;
}
s* pop(s* top)
{
	if (top != NULL)
	{
		s* temp = top;
		top=top->next;
		free(temp);
		display(top);
		return top;
	}
	printf("Stack is empty\n");
	return top;
}
void display(s* top)
{
	if (top!=NULL){
	s* trav = top;
	while (trav != NULL)
	{
		printf("%d ",trav->data);
		trav = trav->next;
	}
	printf("\n");
	}
	else
		printf("Stack is empty\n");
}

