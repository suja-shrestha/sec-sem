//add record
#include<stdio.h>
#include<ctype.h>
void main(){
	int roll[2],age[5],x;
	char name [10];
	FILE *p;
	p=fopen("record.txt","a");
	printf("enter thr roll and name and age");
	for(x=0;x<5;x++){
		scanf("%d %s %d", &roll[x],name[x], &roll[x]);
		fprintf("%d %s %d", roll[x],name[x],roll[x]);
	}
	fclose(p);
	getch();
}
