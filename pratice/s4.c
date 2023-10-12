#include<stdio.h>
#include<string.h>
int main()
{
	char s1[50],s2[50];
	printf("enter the string");
	scanf("%s",s1);
	strcpy(s1,s2);
	strsep(s2);
	if(strcmp(s1,s2)==0)
		printf("pallindrome");
	else
		printf("not a pallindrome");
}

