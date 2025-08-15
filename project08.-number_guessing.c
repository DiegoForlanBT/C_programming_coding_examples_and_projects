#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

  int max = 100 ;
  int min = 1 ;
  srand(time(NULL)); // all round creates random 
  int sysRandom = rand()%(max - min + 1 ) + min ;
  //  systemRandom = 1; || i controlled for 1. time guessing 


  int userGuess ;
  printf("Please enter your guess : ") ;
  scanf("%d" , &userGuess);

  int counter = 1 ;

  while( sysRandom != userGuess ){

    if(sysRandom > userGuess){
      printf("Ugrade your guess ! --> : ");
      scanf("%d" , &userGuess);
    }
    else
    { // (sysRandom < userGuess)
      printf("Downgrade your guess ! --> : ");
      scanf("%d" , &userGuess);
    }

counter ++ ;
    
  } 
printf("Your %d. try is true . The game's number is %d .", counter , userGuess);
  



  
  return 0 ;
  
}
