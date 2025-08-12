#include <stdio.h>
#include <stdbool.h>

int main(){

  bool isStudent = true;

  if( isStudent == true ){                   // if(isStudent) {printf("You are a student."); } 
    printf("You are a student.");            // printf("You are a student.");                              
  }                                          // }
  else{
    printf("You are a not student.");
  }
  
  return 0;
  
}
