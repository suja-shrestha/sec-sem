#include <stdio.h>

int sum_even_odd(int start, int end, int is_even);
int main() {
    int start_range, end_range;
    char even_or_odd;

    printf("Enter the start of the range: ");
    scanf("%d", &start_range);
    printf("Enter the end of the range: ");
    scanf("%d", &end_range);
    printf("Enter 'e' for even or 'o' for odd: ");
    scanf(" %c", &even_or_odd);

    if (even_or_odd == 'e') {
        int result = sum_even_odd(start_range % 2 == 0 ? start_range : start_range + 1, end_range, 1);
        printf("Sum of even numbers in the range: %d\n", result);
    }
    else if (even_or_odd == 'o') {
        int result = sum_even_odd(start_range % 2 != 0 ? start_range : start_range + 1, end_range, 0);
        printf("Sum of odd numbers in the range: %d\n", result);
    }
    else {
        printf("Invalid input. Please enter 'e' or 'o' only.\n");
    }

    return 0;
}
int sum_even_odd(int start, int end, int is_even) {
    if (start > end)
        return 0;
    else if (is_even && start % 2 == 0)
        return start + sum_even_odd(start + 2, end, is_even);
    else if (!is_even && start % 2 != 0)
        return start + sum_even_odd(start + 2, end, is_even);
    else
        return sum_even_odd(start + 1, end, is_even);
}
