/*prime or not */
#include <stdio.h>
#include<conio.h>
void check(int n);
void main(){
	int n;
	printf("enter any no");
	scanf("%d",&n);
	check(n);
	getch();
}
void check(int n){
	int a,c=0,r;
	for(a=1;a<n;a++){
		r=n%a;
		if(r==0){
			c++;
		}
	}
	if(c==2)
		printf("prime");
		else
		printf("not prime");
	
}
