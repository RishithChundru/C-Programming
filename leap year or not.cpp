/* check whether the year is leap year or not*/
#include<stdio.h>
int main(){
	int year;
	printf("enter the year");
	scanf("%d",&year);
	if (year%400==0)
	{
		printf("the year is leap year");
	}
	else if (year%4==0&&year%100!=0)
	{
		printf("the year is leap year");
	}
	else 
	{
		printf("not a leap year");
	}
}
