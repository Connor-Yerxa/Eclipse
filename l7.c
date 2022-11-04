#include <stdio.h>

#include <stdlib.h>

#define size1 100



void push(char *s, int* top, char element);

char pop(char *s, int *top);

int full(int *top, const int size);

int empty(int *top);

void init(int *top);



void init(int *top)
{
	*top = 0;
}

void push(char *s, int* top, char element)
{
	s[(*top)++] = element;
}



char pop(char *s, int *top)
{
	return s[--(*top)];

}



int full(int *top, const int size)
{
	return *top == size ? 1 : 0;
}



int empty(int *top)
{
		return *top == 0 ? 1 : 0;
}





void main()
{

	int top, x, y=0;

	char element;

	char stack[size1], s[size1];

	init(&top);


	//You are required to complete the following:

	//read a sequence of chars
	printf("Enter sequence> ");
	scanf("%s", &s);
	printf("%s\n", s);

	//check if each parenthesis matches with the correct one; print error message if not.

	for(x=0;x<size1;x++)
	{
		if(s[x]=='(' || s[x]=='[' || s[x]=='{')
		{
			if(!full(&top, size1))
			{
				element=s[x];
				printf("push %c into stack\n",element);
				push(stack,&top,element);
			}
		}
		else if(s[x]==')')
		{
			if(!empty(&top))
			{
				printf("Pop\n");
				element = pop(stack,&top);
				printf("%c", element);
			}
			else
			{
				y++;
			}
			if(element!='(')
			{
				y++;
			}
		}
		else if(s[x]==']')
		{
			if(!empty(&top))
			{
				printf("Pop\n");
				element = pop(stack,&top);
				printf("%c", element);
			}
			else
			{
				y++;
			}
			if(element!='[')
			{
				y++;
			}
		}
		else if(s[x]=='}')
		{
			if(!empty(&top))
			{
				printf("Pop\n");
				element = pop(stack,&top);
				printf("%c", element);
			}
			else
			{
				y++;
			}
			if(element!='{')
			{
				y++;
			}
		}
	}

	if(y==0 && empty(&top))
	{
		printf("Correct!!");
	}
	else
	{
		printf("Incorrect");
	}

	//you can define variables and arrays that you need.

}
