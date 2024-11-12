//Write a program in C to find the maximum number between two numbers using a
//pointer.
#include <stdio.h>
void main(){
	int a, b;
	int *a;
	int *b;
	printf("enter the numbe a and b");
	scanf("%d %d ", &a,&b);
	*a=&a;
	*b=&b;
	if(*a>*b){
		printf("a is bigger");
		
	}
	else
	printf("b is biger");
	getch();
}
