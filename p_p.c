#include<stdio.h>
#define MAX_SIZE 100

int stack[MAX_SIZE], top = -1;

void push(value)
{
	if(top == MAX_SIZE - 1)
	{
		printf("Stack overflow!\n");
		return;
	}
	
	top++;
	stack[top] = value;
	
	printf("Element %d has been push to the stack\n", value);
	
}
void pop(value)
{
	if(top == -1)
	{
		printf("Stack Underflow!\n");
		return;
	}
	
	value = stack[top];
	top--;
	
	printf("Element %d has been popped from the stack\n", value);
}

int main()
{
	push(10);
	push(20);
	push(30);
	
	pop();
	pop();
	pop();
	return 0;
}

