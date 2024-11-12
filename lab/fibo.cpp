//0, 1, 1,2, 3,5,8………….....10th term. 
#include<stdio.h>
int main(){
	int a=0, b=1,i;
	for(i=1;i<=5;i++){
		printf("%d ,%d\t",a,b);
		a=b+a;
		b=a+b;
	}
	return 0;
}
