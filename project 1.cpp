#include <stdio.h>
#include <string.h>

#define MAX_TERMS 100 // maximum number of terms that can be stored in the dictionary
#define MAX_TERM_LEN 50 // maximum length of a term name or definition

struct Term {
    char name[MAX_TERM_LEN];
    char definition[MAX_TERM_LEN];
    char subfield[MAX_TERM_LEN];
};

int main() {
    FILE *fp;
    struct Term dictionary[MAX_TERMS];
    int num_terms = 0;

    // read existing terms from file, if any
    fp = fopen("dictionary.txt", "r");
    if (fp != NULL) {
        while (fscanf(fp, "%s %s %s", dictionary[num_terms].name, dictionary[num_terms].definition, dictionary[num_terms].subfield) == 3) {
            num_terms++;
        }
        fclose(fp);
    }

    // get input for new term
    struct Term new_term;
    printf("Enter term name: ");
    scanf("%s", new_term.name);
    printf("Enter definition: ");
    scanf("%s", new_term.definition);
    printf("Enter subfield: ");
    scanf("%s", new_term.subfield);

    // add new term to dictionary and write to file
    if (num_terms < MAX_TERMS) {
        dictionary[num_terms] = new_term;
        num_terms++;

        fp = fopen("dictionary.txt", "w");
        for (int i = 0; i < num_terms; i++) {
            fprintf(fp, "%s %s %s\n", dictionary[i].name, dictionary[i].definition, dictionary[i].subfield);
        }
        fclose(fp);

        printf("Term added successfully.\n");
    } else {
        printf("Dictionary is full. Term could not be added.\n");
    }

    return 0;
}

