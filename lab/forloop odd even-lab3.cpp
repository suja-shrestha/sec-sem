#include <stdio.h>

int main() {
    int i;

    printf("Even numbers between 1 and 100:\n");
    for (i = 2; i <= 100; i += 2) {
        printf("%d\n", i);
    }

    return 0;
}


