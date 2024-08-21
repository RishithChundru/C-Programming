#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *fp;
	char S[20];
	fp=fopen("done.txt","a");
	printf("enter the string");
	gets(S);
	fflush(stdin);
	fputs(S,fp);
	fclose(fp);
}
