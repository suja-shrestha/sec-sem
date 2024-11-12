#include <stdio.h>

int main() {
    int numbers[5];
    int greatest;
    printf("Enter five different numbers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }
    greatest = numbers[0];
    for (int i = 1; i < 5; i++) {
        if (numbers[i] > greatest) {
            greatest = numbers[i];
        }
    }
    printf("The greatest number entered: %d\n", greatest);
    return 0;
}

