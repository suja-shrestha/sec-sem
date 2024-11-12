//reverse
#include <stdio.h>
int main() {
	int i, num=3;
	printf("%d\t",num);
	for(i=1; i<20; i++) {
		if(i%2==0) {
			num= num+3;
			printf("%d\t",num);


		} else {
			num=num*2;
			printf("%d\t",num);
		}

	}
	return 0;
}
