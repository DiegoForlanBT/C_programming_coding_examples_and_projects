#include <stdio.h>
#include <math.h>
int main(){

double area = 0.0 ; 
double radius = 0.0 ;
double perimeter = 0.0 ;
double volume = 0.0 ;
const double pi = 3.14159 ;

 
  printf("Enter a radis value : ");
  scanf("%lf",&radius);

  area = pi * radius * radius ;
  printf("Area : %lf\n",area);

  perimeter = 2 * pi * radius ;
  printf("Perimeter : %f\n",perimeter);

 volume = (4.0/3.0) * pi * pow(raidus, 3);

return 0;
  
}
