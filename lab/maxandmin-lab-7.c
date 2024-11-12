//Write a program in C to find the maximum number between two numbers using a
//pointer.
#include <stdio.h>
int max(int *p, int*q);
void main(){
	int a, b;
	printf("enter the numbe a and b");
	scanf("%d %d/n/t", &a,&b);
	max(&a,&b);
return 0;
}
int max(int *p, int *q) {
	if(*p>*q)
		printf("a is bigger");
	else
	printf("b is biger");
	getch();
}
