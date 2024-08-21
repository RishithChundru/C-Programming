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
	struct student s[4],*p;
	int i,t,min;
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
	min=s[0].cgpa;
	for(i=0;i<=3;i++)
	{
		if(min>s[i].cgpa)
		{
			min=s[i].cgpa;
			t=i;
		}
		printf("the details of students with less cgpa are \n");
		printf("the name of student is %s,the id of student is %d,the cgpa of student is %f",s[t].name,s[t].id,s[t].cgpa);
	}
}
