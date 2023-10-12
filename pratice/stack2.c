#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
struct node*top=NULL;
void push(char item)
	{

		struct node *temp;
		temp=(struct node *)malloc(sizeof(struct node));
		if(temp==NULL)
		{
			printf("sufficient memory");
			exit(0);
		}
		temp->data=item;
		temp ->link=top;
		top=temp;
	}
void pop()
{
}

	void display()
{
	struct node *ptr;
	if(top==NULL)
	{
		printf("no node in linkedlist");
		return;
	}
	ptr=top;
	printf("top->");
	while(ptr!=NULL)
	{
		printf("%d->",ptr->data);
			ptr=ptr->link;
	}
}


	int main(void)
	{
		int ch;
		char item;
		while(1)
		{
			printf("stack operation \n");
			printf("\n1.push");
			printf("\n2.pop");
			printf("\n3.display");
			printf("\n4.exit");
			printf("enter your choice \n");
			scanf("%d",&ch);
			fflush(stdin);
			switch(ch)
			{
case1:
				printf("enter the number item to be inserted");
				scanf("%c",&item);
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
			}
		}
	}
