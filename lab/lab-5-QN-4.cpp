#include <stdio.h>

int main() {
    int numbers[10];
    int sum = 0;
    
    printf("Enter ten different numbers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
    }

    for (int i = 0; i < 10; i++) {
        sum += numbers[i];
    }

    printf("Sum of the numbers entered: %d\n", sum);

    return 0;
}

