#include <stdio.h>

int main(){

  int array[] = {10 ,20 ,30 ,40 ,50 };
  int size = sizeof(array) / sizeof(array[0]);
  
  
  int *p = array ; // p holds first address of array
  /*

  *p = array[0] ,
  *(p+1) = array[1] ,
  *(p+2) = array[2] ;
  *(p+3) = array[3] ;
  *(p+4) = array[4] ;
  
  */
  
  for (int i = 0 ; i <= (size-1) ; i++){
        
    printf("address : %p   and   value : %d\n" , (p+i) , *(p+i));
    
  } 

  
  return 0 ;
}
