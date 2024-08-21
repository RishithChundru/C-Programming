/*wap  to write in file*/
#include<stdio.h>
#include<conio.h>
int main()
{
	FILE*fp;
	char ch;
	fp=fopen("abc.txt","a");
	while(1)
	{
	ch=getchar();
	if(ch=='x')
	break;
	fputc(ch,fp);
	}
}
