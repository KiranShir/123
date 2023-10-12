#include<stdio.h>
#include<string.h>
struct student{
	int id;
	char name[30];
	float percentage;
};
int main()
{
	int i;
	struct student record[2];
	record[0].id=1;
	strcpy(record[0].name,"kiran");
	record[0].percentage=89.0;
	record[1].id=2;
	strcpy(record[1].name,"shirke");
	 record[1].percentage=90;
	 for(i=0;i<2;i++)
		 printf("%d\n%s\n%f\n", record[0].id,record[0].name,record[0].percentage);
	  printf("%d%s%f\n", record[1].id,record[1].name,record[1].percentage);
	 return 0;
	 }

