#include <stdio.h>
int main(){
	char name[20][100];
	int math[10], cmp[10],eng[10];
	printf("enter the name of student");
	for(int i=0; i<10; i++){
		scanf("%d",&name[i]);
	}
	printf("enter the marks");
	for(int i=0; i<3; i++){
			scanf("%d %d %d",&math[i], &cmp[i], &eng[i]);
		}
	for(int i=0; i<10; i++){
		printf("%d %d %d",math[i], cmp[i], eng[i]);
	}
	return 0;
	
}
