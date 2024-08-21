#include <stdio.h>

int main() {
    int arr[100];  
    int n, i, key, low, high, mid, flag = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n); 

    printf("Enter the %d elements of the array in sorted order: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);  
    
    low = 0;
    high = n - 1;
    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == key) {
            flag = 1;
            printf("Element found at index %d\n", mid);
            break;
        }
        else if (arr[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if (flag == 0) {
        printf("Element not found in the array\n");
    }

    return 0;
}

