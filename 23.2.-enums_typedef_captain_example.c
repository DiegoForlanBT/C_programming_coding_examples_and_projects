#include <stdio.h>

typedef enum {
  Jack_Sparrow,
  Davy_Jones,
  Cutler_Beckett,
  James_Norrington
}
captain;


void ownShip(captain lead){
  switch(lead){
    case Jack_Sparrow :
    printf("Jack Sparrow captain of Black Pearl.\n");
    break ;

    case Davy_Jones :
    printf("Davy Jones captain of Black Pearl.\n");
    break ;

    case Cutler_Beckett :
    printf("Cutler Beckett captain of Black Pearl.\n");
    break ;

    case James_Norrington :
    printf("James Norrington captain of Black Pearl.\n");
    break ;

  }
}


int main() {

  captain owner = Jack_Sparrow ;
  ownShip(owner);
  
  return 0 ;
}
#include <stdio.h>

typedef enum {
  Jack_Sparrow,
  Davy_Jones,
  Cutler_Beckett,
  James_Norrington
}
captain;


void ownShip(captain lead){
  switch(lead){
    case Jack_Sparrow :
    printf("Jack Sparrow captain of Black Pearl.\n");
    break ;

    case Davy_Jones :
    printf("Davy Jones captain of Black Pearl.\n");
    break ;

    case Cutler_Beckett :
    printf("Cutler Beckett captain of Black Pearl.\n");
    break ;

    case James_Norrington :
    printf("James Norrington captain of Black Pearl.\n");
    break ;

  }
}


int main() {

  captain owner = Jack_Sparrow ;
  ownShip(owner);
  
  return 0 ;
}
