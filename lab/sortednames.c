#include <stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char name[20][15],temp[10];
	int n,i,j;
	printf("enter the no ");
	scanf("%d",&n);
	printf("enter %d names:\n",n);
	for(i=0;i<n;i++){ 
		scanf("%s",name[i]);}
		for(i=0;i<n;i++){
			for(j=i+1;j<n;j++){
				if(strcmpi(name[i],name[j])>0){
					strcpy(temp,name[i]);
					strcpy(name[i],name[j]);
					strcpy(name[j],temp);
				}
			}
		}
	printf("the sorted names are\n");
	for(i=0;i<n;i++){
		printf("%s\n",name[i]);
	}
	getch();
}
