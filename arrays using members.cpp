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
	struct student s1={"ram",12,7.81};
	struct student s2;
	s2=s1;
	printf("name of student is %s\n,roll is %d\n,cgpa is %f\n",s2.name,s2.roll,s2.cgpa);
}
