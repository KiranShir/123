#include<stdio.h>
typedef struct student
{
	char name[20];
	int age;
}stud;
int main()
{
	stud s1;
	printf("enter the details of student s1:");
	printf("enter the name of the student ");
	scanf("%s",&s1.name);
	printf("enter the age of the student");
	scanf("%d",&s1.age);
	printf("name of the student%s",s1.name);
	printf("name of the age%d",s1.age);
}
