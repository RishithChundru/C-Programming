#include<stdio.h>
#include<conio.h>
int main(){
	FILE *fp;
	int roll;
	float cgpa;
	char name[20];
	fp=fopen("done.txt","r");
	if(fp=NULL){
		printf("file does not exist");
	}
	else{
		while(fscanf(fp,"%d%f%s",&roll,&cgpa,name)!=EOF);
		{
		
		printf("roll is %d\n",roll);
		printf("cgpa is %f\n",cgpa);
		printf("name is %s\n",name);
	}
	}
	fclose(fp);
}
	
