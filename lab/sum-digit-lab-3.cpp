//Write a C program to calculate sum of digits of a number
#include<stdio.h>
int main()

{
	int n, i,add=0, rem=0;
	printf("enter the digits");
	scanf("%d",&n);
   while(n!=0){
   	 rem = n%10;
   	add=add + rem;
   	n=n/10;
   }
		printf("%d",add);
		return 0;
}
