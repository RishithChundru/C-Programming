#include<stdio.h>
int fibo(int n);
int main()
{
	int x,i,result;
	printf("Enter the number of terms");
	scanf("%d",&x);
	for(i=1;i<=x;i++)
	{
		result=fibo(i);
		printf("%d\n",result);
	}
}
int fibo(int n)
{
	if(n==1)
	return 0;
	else if(n==2)
	{
		return 1;
	}
	else
	return fibo(n-1)+fibo(n-2);
}
