#include<stdio.h>
#include<conio.h>
int main()
{
	FILE*fp;
	fp=fopen("abc.txt","r");
	if(fp==NULL)
	{
		printf("file does not exist");
	}
	else{
		printf("file exists");
	}
}
