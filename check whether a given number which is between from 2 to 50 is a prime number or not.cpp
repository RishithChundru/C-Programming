#include<stdio.h>
int main(){
	int i,n,j;
	scanf("%d",&n);
	int count=0;
	for(i=2;i<=50;i++)
	{
		for(j=1;j<=i;j++)
		{
		if(i%j==0)
		{
			count++;
		}
	}
	if(count==2){
		printf("%d\n",i);
	}
	else{
		printf("it is not a prime number");
	}
		
}
}

