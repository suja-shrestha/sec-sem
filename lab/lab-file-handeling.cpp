//lab-filehandeling
#include <stdio.h>
int main(){
	int roll, age;
	long int phone;
	char name[20], address[20];
	FILE *fp;
	fp=fopen("student.txt","w");
	printf("enter the student roll age name and address and phone number\t");
	scanf("%d %d %s %s %li",&roll,&age,name,address,&phone);
	fprintf(fp,"%d %d %s %s %li",roll,age,name,address,phone);
	fclose(fp);
	return 0;
}
