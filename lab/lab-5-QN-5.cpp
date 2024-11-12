#include <stdio.h>

int main() {
    int numbers[5];
    int smallest;
    printf("Enter five different numbers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }
    smallest = numbers[0];
    for (int i = 1; i < 5; i++) {
        if (numbers[i] < smallest) {
            smallest = numbers[i];
        }
    }
    printf("The smallest number entered: %d\n", smallest);
    return 0;
}

