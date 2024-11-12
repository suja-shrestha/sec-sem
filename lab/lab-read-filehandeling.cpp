//lab-filehandeling
#include <stdio.h>
int main(){
	int roll, age;
	long int phone;
	char name[20], address[20];
	FILE *fp;
	fp=fopen("student.txt","r");
	printf("the records are\t");
	fscanf(fp,"%d %d %s %s %li",&roll,&age,name,address,&phone);
	printf("%d %d %s %s %li",roll,age, name, address, phone);
	fclose(fp);
	return 0;
}
