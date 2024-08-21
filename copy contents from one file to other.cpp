#include<stdio.h>
#include<conio.h>
int main()
{
	FILE*fp1,*fp2;
	char ch;
	fp1=fopen("abc.txt","r");
	fp2=fopen("ok.txt","w");
	if(fp1==NULL)
	{
		printf("file not exist");
	}
	else
	{
		ch=fgetc(fp1);
		while(ch!=EOF)
		{
			fputc(ch,fp2);
			ch=fgetc(fp1);
		}
	}
}
