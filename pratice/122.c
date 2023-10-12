#include<stdio.h>
#include<string.h>
int main()
{
	char s1[20];
	char rev[20];
	int len;
	int i,j;
	printf("enter a string");
	scanf("%s",&s1);
       for(len=0; s1[len]!='\0';len++)
       printf("%d",len);
       for(i=0,j=len-1;s1[i]!='\0';i++,j--)
{
	    rev[j]=s1[i];
}
  rev[j]='\0';
  printf("%s",rev);
  }

