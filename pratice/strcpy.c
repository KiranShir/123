#include<stdio.h>
char* mystrcpy(char* dst,char*src);
int main()
{
	char src[10]="kiran";
	char dst[10]="world";
	printf("%s",mystrcpy(dst,src));
}
char* mystrcpy(char* dst,char* src)
{
int i;
for(i=0;src[i]!='\0';i++)
{
dst[i]=src[i];
}
return dst;
}
