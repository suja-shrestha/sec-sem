#include <stdio.h>

int main() {
    int i, j;

    // Outer loop for numbers from 1 to 10
    for (i = 1; i <= 10; i++) {
        printf("Multiplication table for %d:\n", i);
        // Inner loop for multiplication up to 10
        for (j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n"); // Separate each table with a newline
    }

    return 0;
}

