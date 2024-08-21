/*write a program to find sum 0f first n natural numbers*/
#include<stdio.h>
int main(){
int i=1,n;
int sum = 0;
scanf("%d",&n);
while(i<=n)
{
	sum=sum+i;
	++i;
}
	printf("%d",sum);
}
