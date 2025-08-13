#include <stdio.h>
#include <windows.h> // for windows
#include <unistd.h>  // for mac or linux

int main(){

  for(int i = 10 ; i>=0 ; i--){
    Sleep(10); 
  printf("\n %d",i);  
  }
  
  return 0;
}
