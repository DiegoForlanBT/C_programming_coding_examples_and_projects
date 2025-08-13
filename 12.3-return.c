#include <stdio.h>

double volume (double height , double baseA , double baseB ){
    
    double result = height*baseA*baseB;
    return result ;
    
}



int main(){
    
    double h ;
    double sA ;
    double sB ;
    
    
 printf("Enter the height : ");
 scanf("%lf",&h);
    
 printf("Enter a base side value : ");
 scanf("%lf",&sA);
 
 printf("Enter a another base side value : ");
 scanf("%lf",&sB);
 

 printf("Volume result : %.2lf", volume(h,sA,sB));
    
    return 0;
    
}
