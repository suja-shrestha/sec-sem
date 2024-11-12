#include <stdio.h>
int main(){
	int rem, rev=0, a,n;
	printf("enter the number");
	scanf("%d",&n);
	a=n;
	while(n!=0){
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
		
	}
	if(a==rev){
		printf("the number is palindrom");
	}
	else{
		printf("the number is not palindrom");
	}
	return 0;
}
