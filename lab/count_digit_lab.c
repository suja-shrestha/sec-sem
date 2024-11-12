//Write a C program to count number of digits in a number. 
#include <stdio.h>
 int main(){
		int i ,n,count=0;
	printf("enter the digits");
	scanf("%d",&n);
	while(n != 0)
	{
		n = n / 10;
		count++;
	}
	printf("%d", count);
	return 0;
}
