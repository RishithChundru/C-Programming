/*write a program to count even numbers from m to n on screen*/
#include<stdio.h>
int main(){
	int i=1,m,n;
	int count = 0;
	scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++)
	{
		if(i%2==0)
		{
			count=count+1;
		}
		printf("%d",count);
	}
}
