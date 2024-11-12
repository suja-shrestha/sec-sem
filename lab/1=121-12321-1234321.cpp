#include <Stdio.h>
int main(){
	int a=1,b=1,i;
	for(i=1;i<=5;i++){
		printf("%d\t",b);
		a=a*10+1;
		b=a*a;
	}
	return 0;
}

