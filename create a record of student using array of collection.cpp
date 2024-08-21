#include<stdio.h>
#include<conio.h>
struct student
{
	char name[20];
	int id;
	float cgpa;
};
int main()
{
	struct student s[4];
	int i;
	for(i=0;i<=3;i++)
	{
		printf("enter the name of %d student",i+1);
		gets(s[i].name);
		fflush(stdin);
		printf("enter the id of %d student",i+1);
		scanf("%d",&s[i].id);
		fflush(stdin);
		printf("enter the cgpa of %d student",i+1);
		scanf("%f",&s[i].cgpa);
		fflush(stdin);
	}
	for(i=0;i<=3;i++)
	{
		printf("the details of students are \n");
		printf("the name of student is %s,the id of student is %d,the cgpa of student is %f",s[i].name,s[i].id,s[i].cgpa);
	}
}
