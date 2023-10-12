#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr;
	ptr=(int *)malloc(4*sizeof(int));
	if(ptr==NULL)
	{
		printf("memory is not allocated");
	}
	else
	{
		printf("memory is allocated");
	}

return 0;
}

