#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],c1[10][10],r,c,i,j;
	printf("enter no of rows");
	scanf("%d",&r);
	printf("enter no of columns");
	scanf("%d",&c);
	printf("Enter values in first matrix");
for(i=0;i<=r-1;i++)
{
	for(j=0;j<=c-1;j++)
	{
		scanf("%d",&a[i][j]);
	}
}
printf("enter values in second matrix");
for(i=0;i<=r-1;i++)
{
	for(j=0;j<=c-1;j++)
	{
		scanf("%d",&b[i][j]);
	}
}
for(i=0;i<=r-1;i++)
{
	for(j=0;j<=c-1;j++)
	{
		c1[i][j]=a[i][j]+b[i][j];
	}
}
printf("sum of 2 matrices is\n");
for(i=0;i<=r-1;i++)
{
	for(j=0;j<=c-1;j++)
	{
		printf("%d\t",c1[i][j]);
	}
}
}
