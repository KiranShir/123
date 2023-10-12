#include<stdio.h>
#include<string.h>
int main()
{
	int i,count=0;
	char str[50]="hi mirafra";
	for(i=0;str[i]!='\0';i++)
	{
		count++;
	}
	printf("%d",count);
}
