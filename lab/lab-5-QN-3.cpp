#include <stdio.h>

int main() {
    int numbers[10];
    
    printf("Enter ten different numbers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
    }

    printf("Even numbers entered:\n");
    for (int i = 0; i < 10; i++) {
        if (numbers[i] % 2 == 0) {
            printf("%d ", numbers[i]);
        }
    }
    printf("\n");

    return 0;
}

