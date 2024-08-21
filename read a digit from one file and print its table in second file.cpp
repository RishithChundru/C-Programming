#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *fp1,*fp2;
	int n,mul;
	fp1=fopen("done.txt","r");
	fp2=fopen("abc.txt","w");
	if(fp1==NULL)
	{
		printf("file does not exist");
	}
	else{
		n=fgetw(fp1);
		while(n!=Eof)
		{
			fputw(n,fp2);
			n=fgetw(fp1);
		}
	}
	
	for(i=0;i<n;i++)
	{
		mul=n*1;
	}
	printf("%d",mul);
}
