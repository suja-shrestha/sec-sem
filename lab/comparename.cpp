//compare name
#include <stdio.h>
int main(){
	char a[10], b[10];
	int x;
	printf("enter two string\n");
	scanf("%d %d",&a,&b);
	while(a[x]==b[x]&& x++){
		if(a[x]>b[x]){
			printf("%s",a);
			elseif(a[x]<b[x]);
			printf("%s",b);
			else 
			printf("both are same");

		}
	}
	return 0;
