#include <stdio.h>

int getMax(int x , int y){
    if(x>y){
        return x ;
    }else{
        return y ;
    }
}


int main(){
    
    int number1 ;
    printf("Enter the first number : ");
    scanf("%d",&number1);
    
    int number2 ;
    printf("Enter the second number : ");
    scanf("%d",&number2);
    
    int result = getMax(number1,number2);
    printf("Max number is : %d", result);
    
    
    return 0;
}
