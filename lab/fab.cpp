#include<stdio.h>
#
int main(){
	int x,y;
	char name [100][100],t[100];
	printf("enter the name");
	printf("sorting");
	for(x=0;x<10;x++){
		for(y=x+1;y<10;y++){
	
	if(strcmp(name[x],name[y])>0){
		strcopy(t,name[x]);
		strcpy(name[x],name[y]);
		strcpy(name[y],t);
	}
}
printf("s",)

