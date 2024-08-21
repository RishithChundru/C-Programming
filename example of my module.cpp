#include <stdio.h>

int main() {
    FILE *file_pointer;
    char name[50];
    int age;
    

    file_pointer = fopen("records.txt", "a");
    

    printf("Enter name: ");
    scanf("%s", name);
    printf("Enter age: ");
    scanf("%d", &age);
    
    
    fprintf(file_pointer, "%s %d\n", name, age);
    
    fclose(file_pointer);
    
    printf("Record added to file successfully.\n");
    
    return 0;
}

