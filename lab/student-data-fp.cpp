#include <stdio.h>
int main(){
	int roll[100,age[100],phone[10];
	char name[50][100];
	FILE *fp;
	fp=fopen("student.txt","w");
	printf("enter the roll age number and name of student");
	for(int i=0;i<5;i++){
		scanf("%d %d %d %s",&roll[i], &age[i], &phone[i, n&ame[i]);
	}
	for(int i=0; i<5;i++){
		fprintf(fp,"%d %d %d %s", roll[i], age[i], phone[i],name[i]);
	}
	fclose(fp);
	return 0;
	
}
