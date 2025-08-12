#include <stdio.h>
#include <math.h>
int main(){

  int x = 16;
  x = sqrt(x); // 16 to 4 
  printf("%d",x);

  int y = 4;
  y = pow(y,3); // 4^3 to 64
  printf("%d",y);

//--------------------------------------  
  float z = 3.14;
  z = floor(z);
  printf("%.2f",z);

  float w = 3.14;
  w = ceil(w);
  printf("%.2f",w);


  int x = -999;
  x = abs(x);
  printf("%d",x); // output will be +999


  float a = 7.94f;
  f = log(f); // log natural , loge (f) 
  printf("%.2f",f); 
  

  int i = 45;
  i=sin(i);
  /*
  i = tan(i);
  i = cos(i);
  */
  printf("%d",i);

  
  

  
  return 0;
}
