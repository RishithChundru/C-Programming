#include<stdio.h>
int main(){
	int a[10];
	int i,j,t,n;
	printf("enter number of elements");
	scanf("%d",&n);
	printf("enter values in array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
		}
	}
}
printf("sorted array is\n");
for(i=0;i<n;i++)
{
	printf("%d\n",a[i]);
}
}
