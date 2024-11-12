//armstrong
#include<stdio.h>
#include<math.h>
int main(){
	int n, sum, rem, temp;
	printf("enter three digit number");
	scanf("%d",n);
	temp=n;
	while(n!=0){
		rem=n%10;
		sum=sum + pow(rem,3);
		n=n/10;
		
	}
	if(temp==sum){
		printf("the number is arm strong");
	}
	else{
	printf("not");}
	return 0;
}
