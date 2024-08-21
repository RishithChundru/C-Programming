/*wap to find sum of digits of a number*/
/*wap to count number of digits in a given number*/
#include<stdio.h>
int main(){
	int n,r;
	int count = 0;
	int sum =0;
	scanf("%d",&n);
	while(n>0){
		r = n%10;
		sum=+r;
		n = n/10;
	}
	printf("%d",sum);
}
