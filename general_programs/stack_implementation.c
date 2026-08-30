#include <stdio.h>
#include <stdlib.h>


#define MAX 10
//global declarations
int stack[MAX], top = -1;

//function prototypes
int isempty(void);
int isfull(void);
void display(void);
int push(int item);
int pop(void);


int main(void)
{
	int d, element;
	while(1)
	{
		printf("\n Press 1 for push"
			"\n Press 2 for pop"
			"\n Press 3 for display"
			"\n Press 4 for exit");
		printf("\n Enter your choice: ");
		scanf("%d", &d);

		switch(d)
		{
			case 1: int item;
				printf("Enter integer: ");
				scanf("%d",&item);
				push(item);
				break;
			case 2: int element = pop();
				if (element != -1)
					printf("\nPop element = %d",element);
				break;
			case 3: display();
				break;
			case 4: exit(0);

		}
	}
}

int isempty(void)
{
	if(top == -1)
		return 1;
	else
		return 0;
}

int isfull(void)
{
	if(top == MAX-1)
		return 1;
	else
		return 0;
}
int push(int item)
{
	int x;
	x = isfull();
	if (x == 0)
	{
		stack[++top] = item;
	}
	else
		printf("\nThe stack is full");
}
int pop(void)
{
	int x=isempty();
	if (x==0)
		return stack[top--];
	else
	{
		printf("\nThe stack is empty");
		return -1;
	}
}

void display(void)
{
	if (isempty() == 1)
	{
		printf("\nThe stack is empty");
		return;
	}
	for(int i =0 ; i<=top; i++)
	{
		printf("%d ",stack[i]);
	}
}
