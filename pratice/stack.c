#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int stack[MAX];
int top=-1;
void push(int item)
{
	if(top==MAX-1)
	{
		printf("stack overflow");
		return ;
	}
	top=top+1;
	stack[top]=item;
}
void pop()
{
	if(top==-1)
	{
		printf("stack underfolow");
		return ;
	}
	printf("deleted element from stack %d",stack[top]);
		top=top-1;
	
}
void display()
{
	if(top==-1)
	{
		printf("stack is empty");
			return;
	}
	int i;
	printf("element of the stack are");

	for(i=top;i>=0;i--)
	{
		printf("%d",stack[i]);

	}
}
int main()
{
	int ch,item;
	while(1)
	{
		printf("stack-----operation\n");
		printf("push\n");
		printf("pop\n");
		printf("display\n");
		printf("exit\n");
		printf("enter your choice\n");
		scanf("%d",&ch);

		switch(ch)
		{
case1:
			printf("enter the item to be inserted:\n");
			scanf("%d",&item);
			push(item);
			break;
case2: 
			pop();
			break;
case3:
			display();
			break;
case4:
                        exit(0);
			default:
			printf("wrong input");
		}
}
	return 0;

}
			

