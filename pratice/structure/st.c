#include<stdio.h>
#include<string.h>
 struct employee
{
	int id;
	char name[20];
};
int main()
{
	struct employee s1;
	s1.id=100;
      strcpy(s1.name, "kiranshirke");
      printf("%d",s1.id);
      printf("%s",s1.name);
}
