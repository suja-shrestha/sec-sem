#include <stdio.h>
#include <string.h>

int main() {
    char n[10]; // Declare n as an array to store the input string
    char a[10]; // Declare a to store the reversed string
    
    printf("Enter a string: ");
    scanf("%s", n); // Read the input string

    strcpy(a, n); // Copy the input string into a

    strrev(a); // Reverse the string stored in a

    // Compare the reversed string with the original string ignoring case
    if (strcmpi(a, n) == 0) {
        printf("Palindrome\n");
    } else {
        printf("Not a palindrome\n");
    }

    return 0;
}

