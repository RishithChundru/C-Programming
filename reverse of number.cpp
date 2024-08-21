#include<stdio.h>
int main(){
	int n,r,rev=0,t;
	scanf("%d",&n);
	t=n;
	while(n>0){
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	if(t==rev){
		printf("number is palindrome");
	}
	else{
		printf("number is not a palindrome");
	}
}
