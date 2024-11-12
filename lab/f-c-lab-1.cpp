//.Write a program to convert temp scale F to C. 
#include <stdio.h>

int main(){
	int f,c;
	printf("enter the f");
	scanf("%d",&f);
	c= (f-32)*5/9;
	printf("the c is :%d",c);
	return 0;
}
