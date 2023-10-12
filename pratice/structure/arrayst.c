#include<stdio.h>
#include<string.h>
 struct student
{
	int id;
	char name[20];
	int age;
};
int main()
{
	struct student st[3];
	int i;
	printf("enter 3 student details");
	for(i=0;i<3;i++)
	{
        printf("enter the id\n");
       scanf("%d",&st[i].id);
       printf("enter the name\n");
       scanf("%s",&st[i].name);
       printf("enter the age\n");
       scanf("%d",&st[i].age);
	}
      	printf("student information list\n");
     for(i=-0;i<3;i++)
     {
      printf("%d,%s,%d",st[i].id\n,st[i].name\n,st[i].age\n);
     }
}      



