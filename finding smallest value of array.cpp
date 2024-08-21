#include<stdio.h>
int main(){
	int a[5],i,n,min,sum=0;
	printf("enter the number of elements");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	min=a[0];
	for(i=1;i<=n;i++)
	{
		sum=sum+a[i];
		printf("Sum is %d\n",sum);
	}

	{
		if(min>a[i])
		{
			min=a[i];
		}
	}
	printf("smallest value is %d\n",min);
}
