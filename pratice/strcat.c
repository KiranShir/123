#include<stdio.h>
#include<string.h>
char* stringcat(char*,char*);
int main()
{
	char s1[10]="blue";
   	char s2[4]="sky";
	 
	printf("%s\n",stringcat(s1,s2));

}
char* stringcat(char *s1,char *s2)
{
	int i,j;
	
	for(i=0;s1[i]!='\0';i++);
	for(j=0;s2[i]!='\0';i++,j++)
	
	s1[i]=s2[j];
	
	s1[i]!='\0';

     
	return s1;
}

