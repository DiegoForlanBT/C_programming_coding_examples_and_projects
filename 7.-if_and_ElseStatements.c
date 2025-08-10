#include <stdio.h>

int main(){
  
int age ;
  printf("Please enter your age:");
  scanf("%d",&age);

  if(age>=65){
    printf("\n You are a senior .");
  }
  else if(age>=18){
    printf("You are a adult.\n");
  }else if(age<=0){
    printf("This is invalid value");
  }
  else if(age==0){
    printf("You are new born");
  }else{
    printf("You are a child.");
  }




  
  return 0 ;
}
