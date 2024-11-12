#include <stdio.h>
int reverse(int num, int reversedNum);
int main() {
	int num, reversedNum;
	printf("Enter a number: ");
	scanf("%d", &num);
	reversedNum = reverse(num, 0);
	printf("Reverse of the number: %d\n", reversedNum);
	return 0;
}
int reverse(int num, int reversedNum) {
	if (num == 0)
		return reversedNum;
	else {
		int digit = num % 10;
		reversedNum = reversedNum * 10 + digit;
		return reverse(num / 10, reversedNum);
	}
}

