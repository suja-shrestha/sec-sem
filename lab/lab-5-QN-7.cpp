#include <stdio.h>
int main() {
    int numbers[10], temp;
    printf("Enter ten different numbers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
    }
    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (numbers[i] > numbers[j]) {
                temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }
    printf("Numbers in ascending order:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    return 0;
}

