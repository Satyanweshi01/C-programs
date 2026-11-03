#include <stdio.h>
#include <stdlib.h>
 
struct node{
	int coeff;
	int expo;
	struct node *next;
 
};
 
void append(struct node** head, struct node** last);
void display(struct node** head);
 
void add(struct node** head_p1, struct node** head_p2, struct node** head_p3, struct node** last_p3);
void append_sys(struct node** head_p3,struct node** last_p3, int coeff1,int expo1);

void clear_linked_list(struct node** head, struct node** last);

int main()
{
	struct node *head1 = NULL, *last1 = NULL, *head2 = NULL, *last2 = NULL; //two linked list 
	struct node **head_p1 = &head1, **last_p1 = &last1, **head_p2 = &head2, **last_p2 = &last2; // double pointer to update linked list config pointers 

	struct node *head3 = NULL,  *last3 = NULL; //resultant linked list after arithmetric operations
	struct node **head_p3 = &head3, **last_p3 = &last3;


	int ch;
	printf(
		"\nEnter 1 to append for p1"
		"\nEnter 2 to append for p2 "
		"\nEnter 3 to display p1 "
		"\nEnter 4 to display p2 "
		"\nEnter 5 to display p3"
		"\nEnter 6 to add"
		"\nEnter 7 to clear p1"
		"\nEnter 8 to clear p2"
		"\nEnter 9 to clear p3"
		"\nEnter 10 to exit"
		"\nEnter choice: "
		);
 
 
	while(1)
	{
 
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: append(head_p1,last_p1);
					break;
			case 2: append(head_p2,last_p2);
					break;
			case 3: display(head_p1);
					break;
			case 4: display(head_p2);
					break;
			case 5: display(head_p3);
					break;
			case 6: clear_linked_list(head_p3,last_p3);
					add(head_p1,head_p2,head_p3,last_p3);
					break;
			case 7: clear_linked_list(head_p1,last_p1);
					break;
			case 8: clear_linked_list(head_p2,last_p2);
					break;			
			case 9: clear_linked_list(head_p3,last_p3);
					break;
			case 10: exit(0);
			default : printf("Invalid Command");
		}
	}
}
 
void add(struct node** head_p1, struct node** head_p2, struct node** head_p3, struct node** last_p3)
{
	struct node *p1 = *head_p1, *p2 = *head_p2;
 
	while(p1 != NULL && p2 != NULL)
	{
	if (p1->expo < p2->expo)
	{
		append_sys(head_p3,last_p3,p2->coeff,p2->expo);
		p2 = p2->next;
	}
	else if (p1->expo > p2->expo)
	{
		append_sys(head_p3,last_p3,p1->coeff,p1->expo);
		p1 = p1->next;
	}
	else if (p1->expo == p2->expo)
	{
		int sum;
		sum = p1->coeff + p2->coeff;
		append_sys(head_p3,last_p3,sum,p1->expo);
 
		p1 = p1->next;
		p2 = p2->next;

	}		
	}
	if (p1 == NULL)
	{
		while (p2 != NULL)
		{
			append_sys(head_p3,last_p3,p2->coeff,p2->expo);
			p2 = p2->next;
		}
	}
	else if (p2 == NULL)
	{
		while (p1 != NULL)
		{
			append_sys(head_p3,last_p3,p1->coeff,p1->expo);
			p1 = p1->next;
		}
	}
 
}
 
void append_sys(struct node** head_p3,struct node** last_p3, int coeff1,int expo1)
{
	struct node* temp = (struct node*)malloc(sizeof(struct node));
	temp->coeff = coeff1;
	temp->expo = expo1;
 
	temp->next = NULL;
	if (*head_p3 == NULL){
		*head_p3 = *last_p3 = temp;
	}
	else
	{
		(*last_p3)->next = temp;
		*last_p3 = temp;
	}
}
 
void append(struct node** head, struct node** last)
{
	struct node* temp = (struct node*)malloc(sizeof(struct node));
	printf("\nEnter coefficient, exponent: ");
	scanf("%d %d", &temp->coeff, &temp->expo);
 
	temp->next = NULL;
	if (*head == NULL){
		*head = *last = temp;
	}
	else
	{
		(*last)->next = temp;
		*last = temp;
	}
}

void display(struct node** head)
{
	struct node *temp = *head;
	while (temp != NULL)
	{
		printf("(%d)X^%d", temp->coeff, temp->expo);
		if (temp->next != NULL)
		{
		printf("+");
		}
		temp = temp->next;
	}
	printf("\n");
}

void clear_linked_list(struct node** head, struct node** last)
{
	struct node *trav = *head, *temp;

	while (trav != NULL)
	{
		temp = trav;
		trav = trav->next;
		free(temp);
	}
	*head = NULL;
	*last = NULL;
	printf("The linked list is cleared\n");
}
