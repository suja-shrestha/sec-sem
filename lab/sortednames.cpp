#include <stdio.h>
#include<conio.h>
#include<string.h>
void main(){
	char name[10][15],temp[10];
	int n, i , j;
	printf("enter the no ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("enter the names")
		scanf("%s",name[i]);
		for(i=0;i<n;i++){
			for(j=i+1;j<n;j++){
				if(strcmp(name[i],name[j])>0){
					strcpy(temp,name[i]);
					strcpy(name[i],name[j]);
					strcpy(name[j],name[i]);
				}
			}
		}
	}
	printf("the sorted names are: ");
	for(i=0;i<n;i++){
		printf("%s",name[i]);
	}
	getch()
}
