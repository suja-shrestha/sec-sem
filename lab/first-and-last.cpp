//find forst and last digit of a number
#include <stdio.h>
#include<math.h>
int main(){
	int num,digit,last,first;
	printf("enter the number");
	scanf("%d",&num);
	last=num%10;
	digit=log10(num);
	first=num/(pow(10,digit));
	printf("last is = %d\t\n",last);
	printf("first is = %d\t\n",first);
	return 0;
}
