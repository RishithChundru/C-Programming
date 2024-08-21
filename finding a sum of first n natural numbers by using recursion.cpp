#include<stdio.h>
int sum(int);
int main()
{
	int x,result;
	scanf("%d",&x);
	result=sum(x);
	printf("%d",result);
}
int sum(int n)
{
	if(n==1)
	return 1;
	else
	return n+sum(n-1);
}
