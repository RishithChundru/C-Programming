#include<stdio.h>
int main()
{
	int r,c,i,j;
	printf("enter no of rows");
	scanf("%d",&r);
	printf("enter no of columns");
	scanf("%d",&c);
}
for(i=0;i<=r-1;i++)
{
	largest=a[i][0];
}
for(j=0;j<=c-1;j++)
{
	if(largest<a[i][j])
	{
		largest=a[i][j];
	}
}
printf("largest sale of %d sales person is %d",i,largest);
}

