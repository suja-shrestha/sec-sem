#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int length;
    printf("enter a string");
    scanf("%s",&str);
	length= strlen(str);
    printf("Length of the string: %d\n", length);
    return 0;
}

