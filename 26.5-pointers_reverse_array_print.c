#include <stdio.h>

int main(void){

int array[] = {10 ,20 ,30 ,40 ,50 ,60 ,70 ,80 };
  int size = sizeof(array) / sizeof(array[0]); // 8 = 32 / 4

  int *p ;
  p = array ;
  
for(int i = size-1  ;  i >=0 ; i-- ){
  printf("address : %p   and value : %d\n" , p+i , *(p+i) );
}

  return 0;
}
