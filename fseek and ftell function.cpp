#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *f1;
	int n,p;
	char ch;
	f1=fopen("abc.txt","r");
	if(f1==NULL){
		printf("file does not exist");
	}
	else{
		fseek(f1,n,seek_SET);
		p=ftell(f1);
		printf("%d",p);
		ch=fgetc(f1);
		printf("%c",ch);
	}
}
