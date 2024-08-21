#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char s1[]="hello";
	char s2[]="bye";
	int l1=strlen(s1);
	int l2=strlen(s2);
	int i,j=0;
	for(i=l1;i<=l1+l2-1;i++)
	{
		s1[i]=s2[j];
		j++;
	}
	s2[i]='\0';
	printf("%s",s1);
}
