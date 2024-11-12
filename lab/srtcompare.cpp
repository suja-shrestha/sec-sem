#include <stdio.h>
#include <string.h>
int main(){
  int i, j, n;
  char name[50][100]; char temp[100];

  printf("enter how many name you want to sort\n");
  scanf("%d",&n);
  printf("enter the name");
  for(i=0;i<n;i++){
    scanf("%s",&name[i]);
  }
  for(i=0;i<n;i++){
for(j=i+1;j<n;j++){
  if(strcmp(name[i],name[j])<0){
    strcpy(temp,name[i]);
    strcpy(name[i],name[j]);
    strcpy(name[j],temp);
  }
}
  }
  printf("the sorted name are:\t");
  for(i=0;i<n;i++){
    printf("%s\t",name[i]);
  }
}
