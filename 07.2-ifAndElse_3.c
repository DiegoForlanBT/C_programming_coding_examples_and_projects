#include <stdio.h>
#include <string.h> // don't forget the string library 

int main() {

  char name [50] ;
  
printf("Enter your name : ");
fgets(name,sizeof(name),stdin);
name[strlen(name)-1] = '\0';

  if(strlen(name) == 0){
    printf("You are not entered your name.\n");
  }
  else {
    printf("Welcome %s", name);
  }

  
  
  return 0 ;
}
