#include <stdio.h>

typedef enum {  english=1,
                spanish,
                italian,
                french,
                german   
}team;


void champs (team t){
  switch(t){
    case english :
    printf("Premier League winner is Liverpool !!!\n");
    break;

    case spanish :
    printf("La Liga winner is Barcelona !!!\n");
    break;

    case italian :
    printf("Serie A winner is SSC Napoli !!!\n");
    break;

    case french :
    printf("Ligue 1 winner is Paris Saint Germain !!!\n");
    break ;

    case german :
    printf("Bundesliga winner is Bayern Munchen !!!\n");
    break ;

    default:
    printf("Invalid choice! Please enter 1-5.\n");
    break;

  }
}



int main(){

  printf("Make a choice menu .\n");
  printf("1 - show english league champion \n");
  printf("2 - show spanish league champion \n");
  printf("3 - show italian league champion \n");
  printf("4 - show french league champion\n");
  printf("5 - show english league champion\n");

  int choice ;
  printf("Please select 1 to 5 : ");
  scanf("%d",&choice);

  champs((team)choice);


  

  
  return 0;
}
