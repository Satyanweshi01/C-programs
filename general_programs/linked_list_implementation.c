#include <stdio.h>
#include <stdlib.h> // for the exit(0) and dynamic memory allocation

//node structure
typedef struct node
{
	int data;
	struct node *next;
}node;

//global variable
node *head=NULL;

//global node counter
int N_COUNT = 0;

//functions
void append(void);
void display(void);
void insert(void);
void deletion(void);
void reverse(void); 


int main(void)
{
printf("This a simple linked list implementation\n");
while(1){
	int choice;
	printf("type 1 to append\n"
		"type 2 to display\n"
		"type 3 to exit\n"
		"type 4 to insert\n"
		"type 5 to deletion\n"
		"type 6 to reverse\n"
		"Enter the choice: ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: append();
			break;
		case 2: display();
			break;
		case 3: exit(0);
		case 4:	insert();
			break;
		case 5: deletion();
			break;
		case 6: reverse();
			break;
		default: printf("Invalid choice. Reenter choice\n");
	}
	}

return 0;
}

void append(void)

{

	display();

	node *temp = malloc(sizeof(node));// creating a node
	printf("Enter data: ");
	scanf("%d",&temp->data);

	temp->next = NULL;// assigning the node's next to null

	if (head == NULL)
	{
		head = temp;
		N_COUNT++;
	}
	else
	{
		temp->next = head;
		head = temp;
		N_COUNT++;
	}
	display();

}
void display(void)
{
	node *trav = head;
	printf("\n\nLinked list: ");
	while(trav != NULL)
	{
		printf("%d->",trav->data);
		trav = trav->next;
	}
	printf("NULL\n\n");
}
void insert(void)
{
	if (N_COUNT == 0)
	{
		printf("Linked list is empty!!!\n");
		return;
	}

	display();

	// creating node
	node *temp = malloc(sizeof(node));

	// getting data
	printf("Enter data: ");
	scanf("%d",&temp->data);

	temp->next = NULL;

	// getting position
	int pos;
	printf("Enter position to insert: ");
	scanf("%d",&pos);

	//inserting
	if (pos == 1)
	{
		temp->next = head;
		head = temp;
		N_COUNT++;
	}
	else if (pos > 1 && pos <= N_COUNT+1)
	{
	//printf("adding");
		node *trav = head;
		while (pos != 2)
		{
			trav = trav->next;
			pos--;
		}
		temp->next = trav->next;
		trav->next = temp;
		N_COUNT++;
	}
	else if (pos > N_COUNT)
	{
		printf("the position exceeds total node count\n");
		return;
	}
	else
	{
		printf("Invalid position (Negative position)\n");
		return;
	}

	display();


}
void deletion(void)
{
	if (N_COUNT == 0)
	{
		printf("Linked list is empty!!!\n");
		return;
	}
	display();
	// creating node
	node *temp = NULL;

	// getting position
	int pos;
	printf("Enter the element's position to delete: ");
	scanf("%d",&pos);

	//inserting
	if (pos == 1)
	{
		temp = head;
		head = head->next;
		free(temp);
		N_COUNT--;
	}
	else if (pos > 1 && pos <= N_COUNT)
	{
	//printf("adding");
		node *trav = head;
		while (pos != 2)
		{
			trav = trav->next;
			pos--;
		}
		temp = trav->next;
		trav->next = temp->next;
		free(temp);
		N_COUNT--;
	}
	else if (pos > N_COUNT)
	{
		printf("the position exceeds total node count\n");
		return;
	}
	else
	{
		printf("Invalid position (Negative position)\n");
		return;
	}
	display();

}
void reverse(void)
{
	if (N_COUNT == 0)
	{
		printf("Linked list is empty!!!\n");
		return;
	}
	node *present,*proceed,*connect;
	present = head;
	connect = NULL;
	proceed = present->next;

	while(proceed!=NULL)
	{
		present->next = connect;
		connect = present;
		present = proceed;
		proceed = proceed->next;
	}
	head = present;
	head->next = connect;

	display();
}
