#include<stdio.h>
#include<string.h>
typedef struct student
{
	int age;
	char name[50];
	float salary;
}students;
int main()
{
	students st;
	st.age=101;
	strcpy(st.name,"kiran shirke");
	st.salary=56.78;
	printf("%d",st.age);
	printf("%s",st.name);
	printf("%f",st.salary);
}
