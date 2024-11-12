//prime number
#include <stdio.h>
int main() {
	int i,flag,j;
	printf("the prime numbers");
	for(i=2; i<100; i++) {
		flag =1;
		for(j=2; j<i; j++) {
			if(i%j==0) {
				flag = 0;
				break;
			}
		}
		if(flag==1) {
			printf("%d\t",i);
		}

	}
	return 0;
}
