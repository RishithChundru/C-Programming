#include<stdio.h>
int main(){
	int x,y,z;
	printf("enter two numbers");
	scanf("%d%d",&x,&y);
	z=x;
	x=y;
	y=z;
	printf("swapped values are %d\t%d",x,y);
	
}
