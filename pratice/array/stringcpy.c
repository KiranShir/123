#include<stdio.h>
#include<string.h>
char  *my_strcpy(char dst[],  char src[]);
int main()
{
	char src[6]="kiran";
	char dst[6];
	printf("%s",my_strcpy(dst,src));


}
char *my_strcpy(char dst[],  char src[])
{
int i;
for(i=0; src[i]!='\0';i++)
    {
    dst[i]=src[i];
    }
   
dst[i]='\0';
     return dst;
     

    }

