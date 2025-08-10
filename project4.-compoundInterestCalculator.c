------ düzelt ---------



#include <stdio.h>
#include <math.h>
int main(){

  double principal = 0.0 ;
  double rate = 0.0 ;
  int years = 0;
  int timesCompounded = 0 ;
  double total = 0.0 ;

  printf("Enter a principal value (P) : %.2lf\n",principal);
  scanf("%.2lf" , &principal);

  printf("Enter a rate value : %.2lf\n" , rate);
  scanf("%.2lf" , &rate);

  printf("Enter years : %d\n" , years);
  scanf("%d" , &years);

  printf("Enter times compounded : %d\n" , timesCompounded);
  scanf("%d",timesComğounded);

  total = principal * pow((1+(rate/timesCompounded)),years) ;
  printf("Total : %lf",total);






  
  return 0;
}
