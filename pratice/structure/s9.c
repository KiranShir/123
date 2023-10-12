#include<stdio.h>
#include<string.h>
struct student
{
	int id;
	char name[20];
	float salary;
};
void func(struct student record);
int main()
{
	struct student record;
	record.id=123;
	strcpy(record.name,"kiranshirke");
	record.salary=56.5;
	func(record);
}
void func(struct student record)
{
	printf("%d\n%s\n\n%f\n", record.id,record.name,record.salary);
}
