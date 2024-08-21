/*wap to find factorial of a number*/
#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int i=1;
	int fact=1;
	while(i<=n)
	{
		fact = fact * i;
		++i;
	}
	printf("%d",fact);
}
