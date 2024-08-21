#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char s[20];
	int i=0,l=0;
	printf("enter string");
	gets(s);
	fflush(stdin);
	while(s[i]!='\0')
	{
		l++;
		i++;
	}
	printf("%d",l);
}
