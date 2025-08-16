#include <stdio.h>
int main(){

int array [3][3] ;

for(int i = 0 ; i<3 ; i++){
  for(int a = 0 ; a<3 ; a++){
    printf("Enter the array's value : ");
    scanf("%d", &array[i][a]);
  }
}

for(int i = 0 ; i<3 ; i++){
  for(int j = 0 ; j<3 ; j++){
      
      if(i == j){
        printf("%d", array[i][j]);
      }

  }
  printf("\n");
}
  
  return 0 ;
}
