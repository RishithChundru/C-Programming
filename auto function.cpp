#include<stdio.h>
#include<math.h>
int x=3;
void modify(){
	x=3;
}
int main()
{
	auto int x;
	modify();
	printf("%d",x);
}
