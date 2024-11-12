#include <stdio.h>

int main() {
    int i, j;

    // Loop to iterate over each number in the sequence
    for (i = 1; i <= 5; i++) {
        // Print the current number repeated i times
        for (j = 0; j < i; j++) {
            printf("%d", i);
        }
        printf("\n"); // Move to the next line after printing each number
    }

    return 0;
}

