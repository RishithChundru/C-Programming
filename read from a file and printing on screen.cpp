/*wap to read from a file and print on screen*/
#include<stdio.h>
#include<conio.h>
int main()
{
	FILE*fp;
	char ch;
	fp=fopen("abc.txt","r");
	if(fp==NULL)
	{
		printf("file does not exist");
	}
	else{
		ch=fgetc(fp);
		while(ch!=EOF)
		{
			putchar(ch);
			ch=fgetc(fp);
		}
	}
}
