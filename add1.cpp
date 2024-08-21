#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

struct record
{
    char term[100];
    char definition[100];
}med;

	void AddRecord(){
    FILE *fp;
    fp = fopen("dictionary.txt", "a");

    printf("Enter The New Term:\n");
    fgets(med.term, sizeof(med.term), stdin);
    med.term[strcspn(med.term, "\n")] = '\0'; // remove trailing newline character

    printf("Enter The Definition Of New Term:\n");
    fgets(med.definition, sizeof(med.definition), stdin);
    med.definition[strcspn(med.definition, "\n")] = '\0'; // remove trailing newline character

    fprintf(fp, "%s : %s\n", med.term, med.definition);
    printf("The details are added to the file.\n");

    fclose(fp);
}



