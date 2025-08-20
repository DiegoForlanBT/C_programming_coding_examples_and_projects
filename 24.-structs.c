#include <stdio.h>

typedef structs {
  char name[50];
  int year ;
  double budget ;
  char symbol ;
} 
movie ;


int main(){

movie film = {"Caribbean Pirates",2006,140000000.00,$};

  printf("Movie Name : %s\n",film.name);
  printf("Year of Publication : %d\n",film.year);
  printf("Movie's budget : %.2lf %c", film.budget , film.symbol );
  
  return 0;
}
