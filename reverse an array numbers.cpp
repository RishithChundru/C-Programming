#include <stdio.h>

int main() {
    int arr[100];  
    int n, i, j, temp;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);  

    printf("Enter the %d elements of the array: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  
    }

    i = 0;
    j = n - 1;
    while (i < j) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }

    printf("The reversed array is: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);  
    }

    return 0;
}

