#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

struct med{
	char term[100];
	char definition[100];
}med;
void AddRecord(){
	FILE *fp;
    fp = fopen("dictionary.txt", "a");
    
    gets(med.term);
    fflush(stdin);
    printf("Enter The New Term and its Definition:\n");
    gets(med.term);
    gets(med.definition);
    fflush(stdin);

    fprintf(fp,"%s : %s\n",med.term,med.definition);
    printf("Details Added To File Successfully!");
    

    fclose(fp);
}
void DisplayTerms(){}
void Update(){}
void SearchTerm(){}
void Delete(){}
int main(){
	int ch;
	int id,pass;
	//User_ID = "1234";
	//Password = "2005"
	printf("Enter the user id:\n");
	scanf("%d",&id);
	printf("Enter the Password:\n");
	scanf("%d",&pass);
	printf("\t\t\t\tWelcome to our Medical Terminology Dictionary Management\n");
	printf("\t\t\t\t========================================================\n");
	
	if(id==1234 && pass==2005)
	{
	do{
		printf("\n1.Add Record to the file");
		printf("\n2.Display All The Term In Alphabetical Order");
		printf("\n3.Update The Definition");
		printf("\n4.Search The Term By Its Name");
		printf("\n5.Delete The Record");
		printf("\n6.Exit");
		
		printf("\nEnter Your Choice : ");
		scanf("%d",&ch);
		
		switch(ch){
			case 1:
				AddRecord();
			break;
			case 2:
				DisplayTerms();
			break;
			case 3:
				Update();
			break;
			case 4:
				SearchTerm();
			break;
			case 5:
				Delete();
			break;
		}
			
	}
	while(ch!=6);
	}
	else{
		printf("Login Credentials are wrong!");
	}
}
