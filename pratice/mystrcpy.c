#include<stdio.h>
char* mystrcpy(char* , const char*);
int main()	
{
		char str1[]="kiran";
		char str2[6];
		mystrcpy(str2,str1);
   printf("%s",str2);
}
char* mystrcpy(char* str2 ,const char* str1)
{
	int i;
	for(i=0; str1[i]!='\0';i++)
	{
		str2[i]=str1[i];
	}
	str2[i]='\0';
	return str2;
}

