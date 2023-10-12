#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char word[50];
	int len=0;
	printf("press");
	scanf("%s",word);
	for(i=0;word[i]!='\0';i++)
	{
		len++;
	}
	printf("%d",len);
/*	for(i=0;i<len;i++)
	{
		scanf("%c",word[i]);
	}*/
	for(i=0;i<len;i++)
	{
		printf("%c\n",word[i]);
	}
}

