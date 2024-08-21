#include<stdio.h>
#include<conio.h>
#include<string.h>
struct student
{
	char name[20];
	int roll;
	float cgpa;
};
int main()
{
	struct student s={"ram",12,781};
	struct student *p;
	p=&s;
	printf("name of student is %s\n,roll is %d\n,cgpa is %f\n",p->name,p->roll,p->cgpa);
}
