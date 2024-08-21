#include<stdio.h>
int fact(int n);
int main()
{
	int x,result;
	scanf("%d",&x);
	result=fact(x);
	printf("result is %d",result);
	
}
int fact(int n)
{
	if(n==1)
	return 1;
	else
	return n*fact(n-1);
	
}
