#include <stdio.h>
int main() {
	int i,n, j=1;
	printf("enter the number");
	scanf("%d",&n);
	for(i=1; i<=n; i++) {
		j*=i;
	}
		printf("%d",j);

	return 0;

}
