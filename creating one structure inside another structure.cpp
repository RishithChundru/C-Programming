#include<stdio.h>
#include<conio.h>
struct emp
{
	int id;
	float salary;
	char name[10];
	struct address
	{
		int hno;
		char city[20];
		int pin;
	}a;
}e;
int main()
{
	printf("enter id of employee");
	scanf("%d",&e.id);
	printf("enter hno");
	scanf("%d",&e.a.hno);
}
