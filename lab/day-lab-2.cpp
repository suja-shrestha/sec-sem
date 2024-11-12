//. Write a program to input single number (1-7) then display name of day.
//(1 – Sunday and 7- Saturday). 
#include <stdio.h>
int main(){
	int day;
	printf("enter the number 1 - 7 accourding to day");
	scanf("%d",&day);
	switch(day){
		case 1:
			printf("the day is sunday");
			break;
	
		case 2:
			printf("the day is monday");
			break;
		
		case 3:
			printf("the day is tuesday");
			break;
		
		case 4:
			printf("the day is wedneday");
			break;
		
		case 5:
			printf("the day is thursday");
			break;
		
		case 6:
			printf("the day is friday");
			break;
		case 7:
			printf("the day is saturday");
			break;
		default:
			printf("invalid day");
			break;
		
	}
	return 0;
}
