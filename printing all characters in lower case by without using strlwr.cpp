#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char s1[]="Hello To LPU";
	int i=0;
	while(s1[i]!='\0')
	{
		if(s1[i]>=65&&s1[i]<=90)
		{
			s1[i]=s1[i]+32;
		}
		i++;
	}
	puts(s1);
}
