#include <stdio.h>
int main(){
	int rem, i,n, product=1;
	printf("enter the digits");
	scanf("%d",&n);
	while(n!=0){
		rem=n%10;
		product=product*rem;
		n=n/10;
	}
	printf("%d",product);
	return 0;
}

