#include<stdio.h>
#include<string.h>
int  main()
{
	int i,len=0;
	char str[30];
	printf("enter a string");
	scanf("%s",&str);

	

	for(i=0;str[i]!='\0';i++)
	{
		len++;
	}
	printf("%d",len);
}
