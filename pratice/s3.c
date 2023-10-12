#include<stdio.h>
#include<string.h>
int main()
{
	char s1[50]="hello";
	char s2[50]="kiran shirke";
	strcat(s1+3,s2+2);
	printf("%s",s1);
	printf("%s",s2);
}

