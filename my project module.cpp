#include<stdio.h>
#include<conio.h>
#include<math.h>

struct record
{
	char new_term[100];
	char Definition[100];
};
int main()
{
	struct record R[2];
	int i;
	FILE *fp;
	fp=fopen("dictionary.txt","a");	
	for(i=0;i<=1;i++)
	{
		printf("Enter The New Term:\n",i+1);
		gets(R[i].new_term);
		fflush(stdin);
		printf("Enter The Defintion Of New Term:\n",i+1);
		gets(R[i].Definition);
		fflush(stdin);
	}
	for(i=0;i<=1;i++)
	{
		printf("The Details Of The New Term is:\n");
		printf("the new term is %d\n,the definition of the new term is %d\n",R[i].new_term,R[i].Definition);
	}
	
}
