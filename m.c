#include<stdio.h>
#include<stdlib.h>
void main(void)
{
	int *ptr=NULL;
	int count=0;
ptr=(int*)malloc(10*sizeof(int));
if(ptr==NULL)
{
	printf("\n malloc failed");
	exit(-1);
}
printf("\n malloc sucess");

for(count=0;count<10;count++)
{
ptr[count]=count;
}
for(count=0;count<10;count++)
{

		printf("ptr[%d]=(%d)",count,ptr[count]);
}		
free(ptr);
}
