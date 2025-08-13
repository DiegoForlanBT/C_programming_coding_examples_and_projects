#include <stdio.h>
#include <math.h>

int square (int variable){
    
    int y = pow(variable,2);
    return y ;
    
} 



int main(){
    
    int number ;
    printf("Enter the number : ");
    scanf("%d",&number);
    int result = square(number);
    printf("%d square is %d !" , number , result);
    
    
    return 0;
}
