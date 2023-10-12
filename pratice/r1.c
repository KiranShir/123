#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,*ptr,i,sum=0;
		printf("enter the number");

	scanf("%d",&n);
       ptr=(int*)calloc(n,sizeof(int));
       if(ptr==NULL)
       {
	       printf("memory is not allocated");
       }
       printf("enter array element");
       for(i=0;i<n;i++)
       {
	       scanf("%d",ptr+i);
	       sum=sum+*(ptr+i);
       }
       printf("%d",sum);
       free(ptr);
}
