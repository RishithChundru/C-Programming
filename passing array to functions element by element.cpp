#include<stdio.h>
void show(int x);
int main()
{
	int a[10];
	int i,n;
	printf("enter values in array");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=4;i++)
	{
		show(a[i]);
	}
}
void show(int x)
{
	printf("%d\n",x);
}
