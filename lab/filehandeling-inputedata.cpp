#include <stdio.h>
//read name id and age
int main(){
	int i,roll[10],pl[10],it[10],math[10],eng[10],fc[10];
	char name[10];
	FILE *fp;
	fp=fopen("result.txt","w");
	for(i=0; i<10; i++){
		printf("enther the name roll marks of 5 subjets");
	  scanf("%d %d %d %d %d %s",&roll[i],&pl[i],&it[i],math[i],eng[i],fc[i],name[i]);
	  fprintf(fp,"%d %d %d %d %d %s",roll[i],pl[i],it[i],math[i],eng[i],fc[i],name[i]);
	} 
	fclose(fp);
	return 0;
}
