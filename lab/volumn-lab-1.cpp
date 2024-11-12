//Write a program to calculate volume of cylinder. 

#include <stdio.h>
#define pi 3.1416
int main(){
	float r,h, area;
	printf("enter the r and h");
	scanf("%f %f",&r,&h);
	area=pi*r*r*h;
	printf("the volumn is: %f",area);
	return 0;
}
