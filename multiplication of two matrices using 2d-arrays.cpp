#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10],r1,c1,r2,c2,i,j,k;
	printf("enter no of rows of first matrix");
	scanf("%d",&r1);
	printf("enter no of columns of first matrix");
	scanf("%d",&c1);
	printf("enter no of rows of second matrix");
	scanf("%d",&r2);
	printf("enter no of columns of second matrix");
	scanf("%d",&c2);
	printf("Enter values in first matrix");
for(i=0;i<=r1-1;i++)
{
	for(j=0;j<=c1-1;j++)
	{
		scanf("%d",&a[i][j]);
	}
}
printf("enter values in second matrix");
for(i=0;i<=r1-1;i++)
{
	for(j=0;j<=c1-1;j++)
	{
		scanf("%d",&b[i][j]);
	}
}
for(i=0;i<=r1-1;i++)
{
	for(j=0;j<=c2-1;j++)
	{
		for(k=0;k<=c1-1;k++)
		{
			c[i][j]=c[i][j]+a[i][k]*b[k][j];
		}
	}
}
printf("multiplication of 2 matrices is\n");
for(i=0;i<=r1-1;i++)
{
	for(j=0;j<=c2-1;j++)
	{
		for(k=0;k<=c1-1;k++)
		{
			printf("%d\t",c[i][j]);
		}
	}
}
}
