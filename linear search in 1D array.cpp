#include <stdio.h>

int main() {
    int arr[100];  
    int n, i, key, flag = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);  

    printf("Enter the %d elements of the array: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);  


    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            flag = 1;
            printf("Element found at index %d\n", i);
            break;
        }
    }

    if (flag == 0) {
        printf("Element not found in the array\n");
    }

    return 0;
}

