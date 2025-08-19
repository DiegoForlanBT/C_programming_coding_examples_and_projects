#include <stdio.h>

typedef enum {
  Monday ,
  Tuesday ,
  Wednesday ,
  Thursday ,
  Friday ,
  Saturday ,
  Sunday
}Day;

void isWeekend(Day d){
  if(d==Sunday || d==Saturday){
    printf("yes , it's weekend");
  }else{
    printf("no , it's weekday ");
  }
}


int main(){

Day day = Monday ;
isWeekend(day);

  
  return 0 ;
}
