#include<stdio.h>
int sum();
int main()
{
	int result;
	result=sum();
	printf("%d",result);
}
int sum()
{
	int a,b,c;
	scanf("%d%d",&a,&b);
	c=a+b;
	return c;
}
