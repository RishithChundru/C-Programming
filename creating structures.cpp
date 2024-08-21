#include<stdio.h>
#include<conio.h>
struct address{
	int hno;
	char city[10];
	int pin;
};
struct emp{
	int id;
	float salary;
	char name[10];
	struct address a;
}emp{4,12000,"ram",{1,"agra",123}};
int main()
{
	printf("%f",emp.salary);
	printf("%d",emp.a.hno);
}

