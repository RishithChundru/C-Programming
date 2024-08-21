#include<stdio.h>
void show(int x[]);
int main()
{
	int a[10],t;
	int i,n,j;
	printf("enter no of elements");
	scanf("%d",&n);
	printf("enter values in array");
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
	}
	show(a,n);
}
void show(int x[],int n)
{
	for(i=0;i<=n-1;i++)
	{
		printf("%d",x[i]);
	}
}
