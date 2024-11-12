//WAP to input 3 X 3 matrix then print only diagonal elements.//
#include <stdio.h>

int main() {
    int matrix[3][3];

    // Input matrix
    printf("Enter the elements of the 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Enter element at position [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print diagonal elements
    printf("\nThe diagonal elements of the matrix are: ");
    for (int i = 0; i < 3; i++) {
        printf("%d ", matrix[i][i]);
    }
    printf("\n");

    return 0;
}

