#include<stdio.h>
int main()
{
	int i=0,count=0;
	char s[10]="kiran";
		while(i<10)
		{
			if(s[i]=='a'|| s[i]=='e' || s[i]=='i' || s[i]=='0' || s[i]=='u')
			{
				count++;
			}
			i++;
		}
	printf("%d",count);
}
