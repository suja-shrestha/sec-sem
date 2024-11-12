#include <stdio.h>
int main(){
	int roll[100],age[100],phone[10];
	char name[50][100];
	FILE *fp;
	fp=fopen("student.txt","r");
	printf("the data are");
	for(int i=0; i<5; i++){
		fscanf(fp,"%d %d %d %s\t\n",&roll[i], &age[i], &phone[i], name[i]);
		printf("%d %d %d %d\t\n",roll[i], age[i], phone[i], name[i]);
	}
	fclose(fp);
	return 0;
}
