#include <stdio.h>
#include <stdlib.h>
 
struct node{
	int coeff;
	int expo;
	struct node *next;
 
};
 
struct node *head1 = NULL, *last1 = NULL, *head2 = NULL, *last2 = NULL; //global variable
 
struct node *head3 = NULL,  *last3 = NULL; //resultant linked list after arithmetric operations
 
void append1();
void display1();
 
void append2();
void display2();
 
void add();
void append3(int coeff1,int expo1);
void display3();
 
int main()
{
	int ch;
	printf(
		"\nEnter 1 to append for p1"
		"\nEnter 2 to append for p2 "
		"\nEnter 3 to display p1 "
		"\nEnter 4 to display p2 "
		"\nEnter 5 to add"
		"\nEnter 6 to display p3"
		"\nEnter 7 to exit"
		"\nEnter choice: "
		);
 
 
	while(1)
	{
 
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: append1();
					break;
			case 2: append2();
					break;
			case 3: display1();
					break;
			case 4: display2();
					break;
			case 5: add();
					break;
			case 6: display3();
					break;
			case 7: exit(0);
			default : printf("Invalid Command");
		}
	}
}
 
void add()
{
	struct node *p1 = head1, *p2 = head2;
 
	while(p1 != NULL && p2 != NULL)
	{
	//printf("loop");
	if (p1->expo < p2->expo)
	{
		append3(p2->coeff,p2->expo);
		p2 = p2->next;
		//printf("case1");
	}
	else if (p1->expo > p2->expo)
	{
		append3(p1->coeff,p1->expo);
		p1 = p1->next;
		//printf("case2");
	}
	else if (p1->expo == p2->expo)
	{
		int sum;
		sum = p1->coeff + p2->coeff;
		append3(sum,p1->expo);
 
		p1 = p1->next;
		p2 = p2->next;
		//printf("case3");
	}
	//printf("nextterm");		
	}
	//printf("outside the loop");
	if (p1 == NULL)
	{
		while (p2 != NULL)
		{
			append3(p2->coeff,p2->expo);
			p2 = p2->next;
		}
	}
	else if (p2 == NULL)
	{
		while (p1 != NULL)
		{
			append3(p1->coeff,p1->expo);
			p1 = p1->next;
		}
	}
 
}
 
void append3(int coeff1,int expo1)
{
	struct node* temp = (struct node*)malloc(sizeof(struct node));
	temp->coeff = coeff1;
	temp->expo = expo1;
 
	temp->next = NULL;
	if (head3 == NULL){
		head3 = last3 = temp;
	}
	else
	{
		last3->next = temp;
		last3 = temp;
	}
}
 
void display3()
{
	struct node *temp = head3;
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
 
void append1()
{
	struct node* temp = (struct node*)malloc(sizeof(struct node));
	printf("\nEnter coefficient, exponent: ");
	scanf("%d %d", &temp->coeff, &temp->expo);
 
	temp->next = NULL;
	if (head1 == NULL){
		head1 = last1 = temp;
	}
	else
	{
		last1->next = temp;
		last1 = temp;
	}
}
void display1()
{
	struct node *temp = head1;
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
 
void append2()
{
	struct node* temp = (struct node*)malloc(sizeof(struct node));
	printf("\nEnter coefficient, exponent: ");
	scanf("%d %d", &temp->coeff, &temp->expo);
 
	temp->next = NULL;
	if (head2 == NULL){
		head2 = last2 = temp;
	}
	else
	{
		last2->next = temp; 
		last2 = temp;
	}
}
void display2()
{
	struct node *temp = head2;
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