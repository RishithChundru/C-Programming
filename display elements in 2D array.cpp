#include <stdio.h>

int main() {
    int arr[100][100];  
    int rows, cols, i, j;

    printf("Enter the number of rows and columns of the array: ");
    scanf("%d %d", &rows, &cols);  

    printf("Enter the %d elements of the array: ", rows * cols);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);  
        }
    }

    printf("The elements of the array are:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]); 
        }
        printf("\n");
    }

    return 0;
}

