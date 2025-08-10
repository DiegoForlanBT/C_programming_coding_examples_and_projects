#include <stdio.h>
int main(){

int dayOfWeek = 0;

printf ("Please enter a number between 1 and 7 : ");
scanf("%d",&dayOfWeek);
printf("\n");

switch (dayOfWeek)
{
case 1:
  printf("It's Monday");
  break;
 
case 2:
  printf("It's Tuesday");
  break;

case 3:
  printf("It's Wednesday");
  break;
 
case 4:
  printf("It's Thursday");
  break;
  
case 5:
  printf("It's Friday");
  break;

case 6:
  printf("It's Saturday");
  break;
 
case 7:
  printf("It's Thursday");
  break;


default:
printf("You entered wrong value.");
  break;
}

  
  retuen 0;
}
