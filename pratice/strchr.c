#include<stdio.h>
#include<string.h>
char* strchr(char s[],char ch);
int main()
{
	char s[]="kiran";
	char ch ='i';
	printf("%s",strchr(s,ch));

}
char* strchr(char s[],char ch)
{
	int i;
	for(i=0;s[i]='\0';i++)
	{
		if(s[i]=ch)
			return s[i]+1;
	}
	return NULL;
}
