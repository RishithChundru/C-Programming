#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int *p,n1,n2,i;
	printf("enter the size of array");
	scanf("%d",&n1);
	p=(int *)malloc(n1 * sizeof(int));
	if(p==NULL)
	{
		printf("memory not allocated");
	}
	else
	{
		printf("enter the values");
		for(i=0;i<=n1-1;i++)
		{
			scanf("%d",p+i);
		}
		printf("enter the new size");
		scanf("%d",&n2);
		p=(int *)realloc(p,n2*sizeof(int));
		if(p==NULL)
		{
			printf("memory not allocated by realloc");
		}
		else
		{
		//	printf("enter new elements");
			for(i=n1;i<=n2-1;i++)
			{
				scanf("%d",p+i);
			}
			printf("elements in array are\n");
		for(i=0;i<=n2-1;i++)
		{
			printf("%d\t",*(p+i));
		}
		}
		
	}
	free(p);
}
