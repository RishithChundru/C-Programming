#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *fp;
	char S[20];
	fp=fopen("done.txt","r");
	if(fp==NULL)
	{
		printf("file does not exist");
	}
	else{
		while(fgets(S,5,fp)!=NULL){
			puts(S);
		}
	}
	fclose(fp);
	
}
