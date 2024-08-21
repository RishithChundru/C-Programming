/*write a program to check whether given character is vowel or not*/
#include<stdio.h>
int main(){
	char ch;
	printf("enter a character");
	scanf("%c",&ch);
	if (ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	{
		printf("character is vowel");
	}
	else 
	{
		printf("character is not vowel");
	}
}
