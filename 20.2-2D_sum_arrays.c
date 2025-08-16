#include <stdio.h>
int main(){

int arrayOne[2][3];  
int arrayTwo[2][3];

for(int i=0 ; i<2 ; i++){
  for(int j=0 ; j<3 ;j++){
    printf("Please enter [%d] [%d] index of array : ", i, j);
    scanf("%d",&arrayOne[i][j]);
  }
}

printf("\n");

for(int i=0 ; i<2 ; i++){
  for(int j=0 ; j<3 ;j++){
    printf("Please enter [%d] [%d] index of array : ", i, j);
    scanf("%d",&arrayTwo[i][j]);
  }
}

printf("\n");

int sum[2][3] ;
for(int i=0 ; i<2 ; i++){
  for(int j=0 ; j<3 ;j++){
    sum[i][j] = arrayOne[i][j] + arrayTwo[i][j] ; 
  }
}

for(int i=0 ; i<2 ;i++){
  for(int j=0 ;j<3 ; j++){
    printf("%d ", sum[i][j]) ;
  }
  printf("\n");
}
  
  return 0;
}
