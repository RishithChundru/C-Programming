#include <stdio.h>

int main() {
    int serial_number = 1;
    char input[100];

    while (fgets(input, 100, stdin)) {
        printf("%d. %s", serial_number, input);
        serial_number++;
    }

    return 0;
}

