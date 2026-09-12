#include <stdio.h>
#include <stdlib.h>

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
	int d;
	s* top = NULL;
	while(1){
	printf("type 1 to push\n"
		"type 2 to pop\n"
		"type 3 to display\n"
		"type 4 to exit\n"
);
	scanf("%d",&d);
	switch(d)
	{
		case 1:
			top = push(top);
			break;
		case 2:
			top = pop(top);
			break;
		case 3:
			display(top);
			break;
		case 4:
			exit(0);
		default:
			printf("Invalid command\n");

	}
}
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


