#include<stdio.h>
#include<conio.h>
#include<math.h>

struct record
{
    char new_term[100];
    char Definition[100];
}R;

int main()
{
    FILE *fp;
    fp = fopen("dictionary.txt", "a");

    if(fp == NULL)
    {
        printf("File does not exist");
    }	
    else
    {
        printf("Enter The New Term:\n");
        gets(R.new_term);
        fflush(stdin);

        printf("Enter The Definition Of New Term:\n");
        gets(R.Definition);
        fflush(stdin);

        fprintf(fp, "%s : %s\n", R.new_term, R.Definition);
        printf("The details are added to the file.");
    }

    fclose(fp);
    return 0;
}

