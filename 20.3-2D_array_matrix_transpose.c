#include <stdio.h>
int main(){

int array [4][4];

for(int i=0 ; i<4 ; i++){
  for(int j=0 ; j<4 ; j++){
    printf("[%d][%d] value in the index : ", i , j);
    scanf("%d",&array[i][j]);
  }
}

printf("\n");

for(int i =0 ; i<4 ; i++){
  for(int j =0 ; j<4 ; j++){
          printf("%d",array[j][i]);
  }
  printf("\n");
}


return 0;
}
