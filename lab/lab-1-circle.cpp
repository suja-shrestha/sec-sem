//Write a program to calculate area of circle. 
#include <stdio.h>
#define pi 3.1416
int main(){
	float r, a;
	printf("enter the r");
	scanf("%f",&r);
	a=pi*r*r;
	printf("the radius is:%f",a);
	return 0;
}
