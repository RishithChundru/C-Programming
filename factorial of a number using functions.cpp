#include<stdio.h>
int fact(int);
int main()
{
	int a,result;
	scanf("%d",&a);
	result=fact(a);
	printf("%d",result);	
}
int fact(int x)
{
	int f=1,i=1;
	while(i<=x)
	{
		f=f*i;
		i++;
	}
	return f;
}
