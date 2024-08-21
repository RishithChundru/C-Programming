#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100

// Structure for a medical term record
typedef struct {
    char term[MAX_SIZE];
    char definition[MAX_SIZE];
    char subfield[MAX_SIZE];
} MedicalTerm;

// Function prototypes
void addRecord(FILE *fptr);
void displayAllTerms(FILE *fptr);
void updateDefinition(FILE *fptr);
void searchTermByName(FILE *fptr);
void deleteRecord(FILE *fptr);

int main() {
    int choice;
    FILE *fptr;

    fptr = fopen("medical_terms.txt", "a+");

    if (fptr == NULL) {
        printf("Error opening file\n");
        return -1;
    }

    do {
        printf("\nMedical Terminology Dictionary Management\n");
        printf("1. Add record to the file\n");
        printf("2. Display all terms in alphabetical order\n");
        printf("3. Update the definition\n");
        printf("4. Search the term by its name\n");
        printf("5. Delete record\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addRecord(fptr);
                break;
            case 2:
                displayAllTerms(fptr);
                break;
            case 3:
                updateDefinition(fptr);
                break;
            case 4:
                searchTermByName(fptr);
                break;
            case 5:
                deleteRecord(fptr);
                break;
            case 6:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice, please try again.\n");
                break;
        }
    } while (choice != 6);

    fclose(fptr);

    return 0;
}

// Function to add a record to the file
void addRecord(FILE *fptr) {
    MedicalTerm term;

    printf("Enter term: ");
    scanf("%s", term.term);
    printf("Enter definition: ");
    scanf("%s", term.definition);
    printf("Enter subfield: ");
    scanf("%s", term.subfield);

    fprintf(fptr, "%s\t%s\t%s\n", term.term, term.definition, term.subfield);

    printf("Record added to file.\n");
}

// Function to display all terms in alphabetical order
void displayAllTerms(FILE *fptr) {
    char terms[MAX_SIZE][MAX_SIZE];
    char definition[MAX_SIZE];
    char subfield[MAX_SIZE];
    int i, j, count = 0;

    // Read all terms from file and store them in a 2D array
    rewind(fptr);
    while (fscanf(fptr, "%s\t%s\t%s", terms[count], definition, subfield) == 3) {
        count++;
    }

    // Sort terms in alphabetical order
    for (i = 0; i < count - 1; i++) {
        for (j = i + 1; j < count; j++) {
            if (strcmp(terms[i], terms[j]) > 0) {
                char temp[MAX_SIZE];
                strcpy(temp, terms[i]);
                strcpy(terms[i], terms[j]);
                strcpy(terms[j], temp);
            }
        }
    }

    // Display all terms in alphabetical order
    printf("All terms in alphabetical order:\n");
    for (i = 0; i < count; i++) {
        printf("%s\n", terms[i]);
    }
}

