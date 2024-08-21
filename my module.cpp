#include <stdio.h>

int main() {
    char term[50];
    char definition[200];

    // Get input from the user
    printf("Enter a medical term: ");
    scanf("%s", term);

    printf("Enter the definition of %s: ", term);
    scanf("%s", definition);

    // Open the file in "append" mode
    FILE *fp = fopen("dictionary.txt", "a");

    // Write the new record to the file
    fprintf(fp, "%s: %s\n", term, definition);

    // Close the file
    fclose(fp);

    printf("Record added to file.\n");

    return 0;
}

