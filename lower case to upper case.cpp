/*write a program to enter a character ,if it is in lower case convert it to upper case*/
#include<stdio.h>
int main(){
	char ch;
	printf("enter character");
	scanf("%c",&ch);
	if (ch>=97 && ch<=122)
	{
		ch=ch-32;
		printf("upper case character is %c",ch);
	}
	else
	{
		printf("already in upper case");
	}
}
