#include<stdio.h>
void swap(int ,int);
int main()
{
	int x,y;
	scanf("%d%d",&x,&y);
	swap(x,y);
	printf("In main %d and %d\n",x,y);
}
void swap(int a,int b)
{
	int c;
	c=a;
	a=b;
	b=c;
	printf("In swap %d and %d\n",a,b);
}
