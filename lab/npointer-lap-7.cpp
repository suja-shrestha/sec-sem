/*Write a program in C to store n elements in an array and print the elements using a
pointer.*/
#include <stdio.h>
int print(int *p);
int main(){
	int n[10],i, p;
		printf("enter an n number");
	for(i=0; i<10; i++){
	scanf("%d",&n[p]);
	print(&n[p]);}
	
}
int print(int *p){
	for(i=0;i<10;i++){
	printf("%d", *p);}
}

