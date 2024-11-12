#include <stdio.h>

int main() {
    int N, i;
    unsigned long long factorial = 1; // Using unsigned long long to handle large factorials

    // Input number from the user
    printf("Enter a number: ");
    scanf("%d", &N);

    // Calculate factorial of N
    for (i = 1; i <= N; i++) {
        factorial *= i;
    }
 
    // Print the factorial value
    printf("Factorial of %d = %llu\n", N, factorial);

    return 0;
}

