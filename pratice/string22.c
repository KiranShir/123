#include<stdio.h>
#include<string.h>
int main()
{
	char s[20];
	int i;
	printf("enter the string");
	scanf("%s",&s);
        for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>='A'&& s[i]<='Z')
		s[i]=s[i]-32;
	}
	printf("%s",s);
}

