#include<stdio.h>
#include<string.h>
struct college
{
	int cid;
	 int age;
};
struct student
{
	int id;
	char name[20];
	struct college clg;

};
int main()
{
	struct student std={20,"kiran",76,23,};
printf("%d",std.id);
printf("%s",std.name);
printf("%d",std.clg.cid);
printf("%d",std.clg.age);
}



