//pass and username
#include <stdio.h>
#include <string.h>
void main(){
	char usersavedname[20]={sujalshrestha};
	char usersavedpass[20]={sujal};
	char username[20], userpass[20];
	printf("enter the password");
	scanf("%s",&userpass);
	printf("enter the username");
	scanf("%s",&username);
	char comparepass=srtcmp(usersavedpass,userpass);
	char compareuser=srtcmp(usersavedname,username);
	if(comparepass==0 && compareuser==0){
		printf("access granted");
	}
	else{
		printf("access denied");
	}
}
