//pass and username
#include <stdio.h>
#include <string.h>
void main(){
	char usersavedname[20]={"sujalshrestha"};
	char usersavedpass[20]={"sujal"};
	int comparepass;
	int compareuser;
	char username[20], userpass[20];
	printf("enter the password");
	scanf("%s",&userpass);
	printf("enter the username");
	scanf("%s",&username);
	comparepass=strcmp(usersavedpass, userpass);
	compareuser=strcmp(usersavedname, username);
	if(comparepass==0 && compareuser==0){
		printf("access granted");
	}
	else{
		printf("access denied");
	}
}
