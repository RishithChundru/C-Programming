#include<stdio.h>
int main(){
	int a[10],n,i,sum=0;
	printf("enter the number of elements:");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=n;i++)
	{
		sum=sum+a[i];
	}
	printf("Array is\n");
	for(i=0;i<=n-1;i++)
	{
		sum=sum+a[i];
		printf("%d",sum);
	}
	
}
