#include<stdio.h>
int main()
{
	char s[12]="hello kiran";
	int i=0;
      int count =0;
      while(i<11)
      {
	      if(s[i]=='a'|| s[i]=='e' || s[i]=='i'||s[i]=='o'||s[i]=='u')
	      {
		      count++;
	      }
	      i++;

      }
      printf("the number of vowel %d",count);
}

