// ternany operators short-cut like if and else
// (condition) ? value_if_trur : value_false_if ;

#include <stdio.h>
#include <stdbool.h>

int main(){

  int x = 10 ;
  int y = 7 ;

  int max = (x>zy) ? x : y ;
  printf("Max : %d",max);
//________________________________________________________________________________________

  bool isOnline = true ;
  printf("Player 1 is : %d", (isOnline ? "true" : "false") );
//------------------------------------------------------------------------------------------

  int age ;
  printf("Enter your age : ");
  scabf("%d",&age);

  printf("%s" , (age>18) ? "You are an adult" : "You are an child ");

//-----------------------------------------------------------------------------------------

      int hour;
    printf("Please enter the your hour info : ");
    scanf("%d",&hour);
    
    int minute;
    printf("Please enter the your minute info : ");
    scanf("%d",&minute);
    
    char *time = (hour>12) ? "PM" : "AM ";
    
    printf("%02d:%02d %s",hour,minute,time);
    
  

  
  return 0;
}

