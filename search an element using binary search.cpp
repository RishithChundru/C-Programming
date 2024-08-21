#include<stdio.h>
int main(){
	int a[10];
	int i,j,t,n,f,l,m,key;
	printf("enter number of elements");
	scanf("%d",&n);
	printf("enter values in array");
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=n-1;i++)
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
printf("enter the key to search\n");
scanf("%d",&key);
f=0;
l=n-1;
while(f<=l)
{
	m=(f+l)/2;
	if(key==a[m])
	{
		printf("key position is found at %d position",m+1);
		break;
	}
	else if(key<a[m])
	{
		l=m-1;
	}
	else
	{
		f=m+1;
	}
}
}
