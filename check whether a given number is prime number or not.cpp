#include<stdio.h>
int main(){
	int i,n;
	scanf("%d",&n);
	int count=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		count++;
	}
	if(count==2){
		printf("it is prime number");
	}
	else{
		printf("it is not a prime number");
	}
}
