#include<stdio.h>
#include<conio.h>
int main(){
	FILE *fp;
	int roll;
	float cgpa;
	char name[20];
	fp=fopen("done.txt","w");
	printf("enter roll and cgpa");
	scanf("%d%f",&roll,&cgpa);
	fflush(stdin);
	printf("enter name");
	gets(name);
	fflush(stdin);
	fprintf(fp,"%d\t%f\t%s\n",roll,cgpa,name);
}
