#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* link;
};
struct node *top,*temp;
void push()
{
	        struct node *top=NULL;
	        struct node *newnode;
		struct node *next;
		newnode=(struct node*)malloc(sizeof(newnode));
		if(top==NULL)
		{
			temp=top=newnode;
		}
		else
		{
	         scanf("%d",&newnode->data);
	         newnode->link=NULL;	 
		}
//		temp->next=newnode;
//       }
//	 newnode->link=top;
	 temp=newnode;
	 temp->next=newnode;
}

void print()
{  
	temp=top;
	printf("element stack are");
	while(temp)
	{
         printf("%d",temp->data);
	 temp=temp->link;
	}
	printf("\n");
}

int main()
{
/*	int data,choice;
	while(1)
{
	printf("1. push\n");
	printf("2.print\n");
	printf("3.quit\n");
	printf("enter the choice ");
	scanf("%d",&choice);
	switch(choice)
	{
case1:printf("enter the element to be pushed");
      scanf("%d",&data);
      push(data);
      break;
case2:print();break;
case3:exit(1);
		default:
      printf("wrong choice");
		default:
      printf("wrong choice\n");
      break;
	}
}
return 0;*/
push();
push();
push();
print();
}


	
