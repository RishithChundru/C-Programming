#include <stdio.h>

int main() {
    int arr[100];  
    int n, i;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n); 

    printf("Enter the %d elements of the array: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]); 
    }

    printf("The elements of the array are: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]); 
    }

    return 0;
}

