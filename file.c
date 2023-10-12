#include<stdio.h>
int main()
{
	FILE *fp;
	char ch;
	fp=fopen();
	while(ch=getchar()!EOF)
	{
		fputc(ch,fp);
		printf("C",ch);
	}
