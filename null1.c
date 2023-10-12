#include<stdio.h>
int main()
{
	int *ptr=NULL;
	if(ptr!=NULL)
	{
		printf("value of ptr %d",*ptr);
               }
	else
	{
		printf("invalid pointer");
	}
	return 0;
}
