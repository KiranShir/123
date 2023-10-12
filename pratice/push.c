#include<stdio.h>
#include<stdlib.h>
int a[5];
int top=-1;
int MAX;
int data;
void push (int data)
{
	if(top==MAX-1)
	{
		printf("stack is overflow");
		return ;
	}
	top=top+1;
	a[top]=data;
}
int pop()
{
	int value;
	if(top==-1)
	{
		printf("stack is underflow");
		exit(1);
	}
	top=top-1;
	value=a[top];
	return top;
}
void  print()
{
	int i;
	if(top==-1)
	{
		printf("stack is underflow");
		return ;
	}
	for(i=top;i>=0;i--)
		printf("%d",a[i]);
	printf("\n");
}
int main()
{
	push(1);
	push(2);
	push(3);
	push(4);
	push(5);
	data=pop();
	data=pop();
	data=pop();
	return 0;
}
