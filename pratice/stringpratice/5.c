#include<stdio.h>
int main()
{
	int i,j,len;
	char s[10],rev[10];
	printf("enter a string");
	scanf("%s",&s);
	for(len=0; s[len]!='\0';len++);
        for(i=0,j=len-1; s[i]!='\0';i++,j--)
	
	rev[j]=s[i];
	rev[len]='\0';
	
	printf("%s",rev);
}
