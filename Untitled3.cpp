#include<stdio.h>
int main(){
	int x,y;
	printf("enter two numbers");
	scanf("%d%d",&x,&y);
	x=x+y;
	y=x-y;
	x=x-y;
	printf("swapped values are %d\t%d",x,y);
	
}
