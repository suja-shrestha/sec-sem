#include <stdio.h>

int main() {
  float a,b,c;
  printf("enter a: ");
  scanf("%f",&a);
  printf("enter b: ");
  scanf("%f", &b);
  printf("enter c: ");
  scanf("%f", &c);
  if(a>b){
    if(a>c){
      printf("greater is %f", a);
    }
    else{
      printf("greater is %f", c);
    }
  }
  else{
    if(b>c){
      printf("greater is %f", b);
    }else{
      printf("greater is %f", c);
    }
  }
  return 0;
  
}