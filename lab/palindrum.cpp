#include <stdio.h>
#include <string.h>

int main() {
    char str[20];
    int flag = 1;
    printf("Enter the string: ");
    
    fgets(str, sizeof(str), stdin);
    int length = strlen(str);
    
    for (int i = 0; i <= length / 2; i++) {
        if (str[i] != str[length - i - 2]) {
            flag = 0;
            break;
        }
    }
    
    if (flag) {
        printf("String is palindrome.\n");      
    } else {
        printf("String is not palindrome.\n");
    }
    
    return 0;
}

