#include<stdio.h>
typedef struct student
{
	int age;
	char name[20];
}stud;
int main()
{
	stud s1;
	printf("enter  the student age");
	scanf("%d",&s1.age);
	printf("enter the name");
	//scanf("%s",&s1.name);
	s1.name="kiran";
	printf("%d",s1.age);
	printf("%s",s1.name);
}

