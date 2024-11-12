//lab-filehandeling
#include <stdio.h>
int main(){
	int roll[1000], age[1000],n,i;
	long int phone[1000];
	char name[1000], address[1000];
	FILE *fp;
	fp=fopen("student.txt","a");
	printf("enter how many record you want to add");
scanf("%d",&n);
	printf("enter %d student roll age name and address and phone number\t",n);
for(i=0;i<n;i++){
	scanf("%d %d %s %s %li",&roll,&age,name,address,&phone);
	fprintf(fp,"%d %d %s %s %li",roll,age,name,address,phone);
}
	fclose(fp);
	return 0;
}
