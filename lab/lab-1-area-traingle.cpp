//Write a program to calculate area of triangle.

#include <Stdio.h>;
int main() {
	int b,h,area;
	printf("enter the b and h");
	scanf("%d %d",&b,&h);
	area=0.5*b*h;
	printf("the area of traingle is: %d",area);
	return 0;
}
