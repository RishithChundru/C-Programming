#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
	int *p,n,i;
	printf("enter the no of elements");
	scanf("%d",&n);
	p=(int *)calloc(n,sizeof(int));
	if(p==NULL)
	{
		printf("memory not allocated");
	}
	else{
		printf("enter the values in array");
		for(i=0;i<=n-1;i++)
		{
			scanf("%d",p+i);
		}
		printf("%d",p+i);
	}
}
