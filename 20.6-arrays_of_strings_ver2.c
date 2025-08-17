#include <stdio.h>
#include <string.h>
int main(){

  /*
char names[3][20] = {0};

printf("Enter a name : ");
fgets(names[0] , sizeof(names[0]) , stdin);
names[0][ strlen(names[0]) - 1 ] = '\0';

printf("Your name is : %s" , names[0] );
 */


  int howMany;
printf("How many name will you enter : ");
scanf("%d",&howMany);
getchar(); // if you forget this function learn again 

char names[howMany][20] ;

for(int i=0 ; i<howMany ; i++){
  printf("Enter %d. name : " , (i+1));
  fgets(names[i] , sizeof(names[i]) , stdin );
  names[i][ strlen(names[i]) - 1 ] = '\0';
}


for(int i=0 ; i<howMany ; i++){
  printf("\nYour name is : %s",names[i]);
}
  
  return 0 ;
}
