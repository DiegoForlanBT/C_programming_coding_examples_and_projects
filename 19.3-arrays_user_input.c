#include <stdio.h>
int main(){

int size ;
  printf("Please enter a value to determinte array's length : ");
  scanf("%d",&size);

  int array[size]; // if int size[3] like this , arrays can collet only 3 element || int[0] , int[1] , int[2]

  for(int i = 0 ; i<size ; i++ ){
    printf("%d. index's of array is : ", i);
    scanf("%d",&array[i]);
  }
for(int a = 0 ; a<size ; a++){
  printf("%d ",array[a]);
}
  
  return 0 ;
}
