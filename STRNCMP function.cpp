#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char s1[]="welcome";
	char s2[]="welcome";
	int l = strncmp(s1,s2,3);
	if(l==0)
	{
		printf("strings are equal");
	}
	else if(l>0)
	{
		printf("string 1 is greater");
	}
	else
	{
		printf("string 2 is greater");
	}
}
