#include <stdio.h>

int main() {
    float matrix[3][3];
    printf("Enter the elements of the 3x3 matrix:\n");
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Enter element at position [%d][%d]: ", i, j);
            scanf("%f", &matrix[i][j]);
        }
    }
    printf("The entered 3x3 matrix is:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%.2f\t", matrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

