//Write a program to calculate perimeter of rectangular surface. 
#include <stdio.h>;
int main(){
float length, width, perimeter;
printf("enter the width and lengtht");
scanf("%f %f", &width,&length);
perimeter=2*(length+width);
printf("the perimeter is :%f",perimeter);
return 0;
}

