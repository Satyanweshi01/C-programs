#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//stack implementation using linked list
typedef struct stack {
	char data;
	struct stack *next;
}s;

int pw_eval(char sign);
s* push(s* top, char element);
s* pop(s* top);
void display(s* top);

int main(void)
{
	// A+B-(C-D) ==>
	char infix_expr[101];
	char postfix_expr[101];
	s* top = NULL;

	top =push(top,'('); // initial left parenthesis
	//display(top);
	printf("Enter the infix expression(Upto 100 characters): ");
	scanf("%s",infix_expr);
	printf("%s\n",infix_expr);
	int expr_len = strlen(infix_expr);
	infix_expr[expr_len] = ')'; // adding right parenthesis at the end of the infix expression

	//expression length
	//printf("length: %d\n",expr_len);

	//int i = 0; // index for infix_expr array
	int j = 0; // index for postfix_expr array
	// reading the expression
	for (int i = 0; i<=expr_len; i++) //while(infix_expr[i] != ')')
	{
		// printf("%d\n",i); // iteration count
		char curr_char = infix_expr[i];		// here infix_expr[i] is the current character
		//printf("%c\n",curr_char);

		if ((curr_char == '+')||(curr_char == '-')||(curr_char == '*')||(curr_char == '/')||(curr_char == '^')||(curr_char == '(')||(curr_char == ')'))//assuming only +,-,*,/,^ given as operator and rest are alphabet
		{
			//printf("@");
			if (pw_eval(top->data)>pw_eval(curr_char) || curr_char == '(')
			{
				top=push(top,curr_char);
				printf("Pushed: %c\n",curr_char);
				//display(top);
				//i++;
			}
			else
			{
				if (curr_char == ')')
				{
					//printf("@\n");
					while(top->data != '(')
					{
						//printf("#\n");
						postfix_expr[j] = top->data;
						printf("Poped: %c\n",top->data);
						top = pop(top);
						j++;
					}
					continue;
				}
				while(pw_eval(top->data)<=pw_eval(curr_char))
				{
					postfix_expr[j] = top->data;
					top = pop(top);
					printf("Poped: %c\n",curr_char);
					j++;
				}
				top = push(top,curr_char);
				printf("Pushed: %c\n",curr_char);
				//i++;
			}
		}
		else
		{
			//printf("#");
			postfix_expr[j] = toupper(curr_char);
			//i++;
			j++;
		}
	}
	top = pop(top);
	//display(top);
	printf("%s\n",postfix_expr);
}
int pw_eval(char sign)
{
	if (sign == '+' || sign == '-')
		return 1;
	if (sign == '*' || sign == '/')
		return 2;
	if (sign == '^')
		return 3;
}
s* push(s* top, char element)
{
	s* temp = (s*)malloc(sizeof(s));
	temp->data = element;
	temp->next = top;
	//display(temp);
	return temp;
}
s* pop(s* top)
{
	if (top != NULL)
	{
		s* temp = top;
		top=top->next;
		free(temp);
		//display(top);
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
		printf("%c ",trav->data);
		trav = trav->next;
	}
	printf("\n");
	}
	else
		printf("Stack is empty\n");
}

