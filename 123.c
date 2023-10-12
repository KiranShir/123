#include<stdio.h>
struct book
{
	int id;
	int age;
	float salary;
};
int main()
{
	struct book s1[3];
	s1[0].id=67;
	s1[0].age=45;
	s1[0].salary=89.7;
        s1[1].id=68;
	s1[1].age=67; 
	s1[1].salary=67.9;
	s1[2].id=67;  
	s1[2].age=65;  
     	s1[2].salary=78;
for(int i=0;i<3;i++)
	printf("%d%d%d", s1[0].id, s1[0].age, s1[0].salary);
         printf("%d%d%d", s1[1].id, s1[1].age, s1[1].salary);
         printf("%d%d%d", s1[0].id, s1[1].age, s1[1].salary);
}
