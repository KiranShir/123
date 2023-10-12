#include<stdio.h>
int strcmp(char s1[], char s2[]);
       int main()
{
 char s1[10]="kiran";
 char s2[10]="shirke";
 printf("%d",strcmp(s1,s2));
}
int strcmp(char s1[],char s2[])
{
	int i=0;
	while(s1[i]!='\0'|| s2[i]!='\0')
	{
		if(s1[i]!=s2[i])
			return (s1[i]-s2[i]);
			i++;
		}

		return 0;
	}


