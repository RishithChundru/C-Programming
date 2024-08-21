#include<stdio.h>
int x=1;
int main(){
	extern int x;
	printf("%d",x);
}
