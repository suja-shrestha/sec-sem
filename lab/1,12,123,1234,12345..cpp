//1,12,123,1234,12345. 
#include <stdio.h>
int main()
{int a,b=1,i ;
for(i=1;i<=5;i++){
	a=a*10+b;
	b++;
	printf("%d\t",a);
	}
	return 0;
}
