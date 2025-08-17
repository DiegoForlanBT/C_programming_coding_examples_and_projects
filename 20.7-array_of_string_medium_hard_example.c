#include <stdio.h>
#include <string.h>

int main () {

int numCity ;
printf("How man city name will you enter : ");
scanf("%d",&numCity);
getchar();

int cityNameLenghth ;
printf("Has a city name how many characters :");
scanf("%d",&cityNameLenghth);
getchar();

char cities [numCity][cityNameLenghth];

printf("------------CITIES-----------");

for(int i = 0 ; i < numCity ; i++){
  printf(" %d. city name is : ",(i+1));
  fgets(cities[i] , sizeof(cities[i]) , stdin);
  cities[i][strlen(cities[i]) - 1 ] = '\0';

}


for(int i = 0 ; i < numCity ; i++)
{
  printf("city : %s " , cities[i]);
}
  
  return 0 ;
}

